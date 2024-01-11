#include <iostream>
using namespace std;

int arr[101][101] = {0, };
int n, m;
int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

int check(int y, int x){
    int cnt = 0;

    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0&&nx<0&&ny>=n&&n>=n) continue;
        if(arr[ny][nx] == 1)cnt++;
    }
    if(cnt == 3) return 1;
    else return 0;
}

int main() {
    
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int r, c;
        cin >> r >> c;
        arr[r][c] = 1;
        cout << check(r,c) << endl;
    }
    return 0;
}