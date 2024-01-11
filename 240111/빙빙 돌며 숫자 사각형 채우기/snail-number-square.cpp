#include <iostream>
using namespace std;

int n, m;
int arr[101][101] = {0, };

bool inRange(int y, int x){
    return (y>0 && y<=n && x>0 && x<=m);
}

int main() {
    cin >> n >> m;
    
    int dy[4] = {-1,0,1,0}; //북, 동,남,서
    int dx[4] = {0,1,0,-1};

    arr[1][1] = 1;
    int y = 1;
    int x = 1;
    int dir = 1;
    for(int i=2; i<=n*m; i++){

        int ny = y + dy[dir];
        int nx = x + dx[dir];

        // 범위를 벗어나거나 방문한적이 있는 곳이면 방향바꾸기
        if(!inRange(ny,nx) || arr[ny][nx]!=0)
            dir = (dir + 1) % 4;
        
        y = y + dy[dir];
        x = x + dx[dir];
        arr[y][x] = i;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << arr[i][j] << ' ';
        }cout << endl;
    }

    return 0;
}