#include <iostream>
#include <queue>
using namespace std;

int n, k;
int arr[101][101];
int visited[101][101];
struct Node{
    int y;
    int x;
};
queue<Node> q;
int cnt = 0;
int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

void bfs(){

    while(!q.empty()){
        Node target = q.front();
        q.pop();

        for(int i=0; i<4; i++){
            int ny = target.y + dy[i];
            int nx = target.x + dx[i];

            if(ny<0 || nx<0 || ny>=n || nx>=n) continue;
            if(visited[ny][nx] == 1) continue;
            if(arr[ny][nx] == 1) continue;

            visited[ny][nx] = 1;
            cnt++;
            q.push({ny,nx});
        }        
    }
}

int main() {
    
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<k; i++){
        int r, c;
        cin >> r >> c;
        if(arr[r][c]==1) continue;
        if(visited[r][c] == 0) cnt++;
        visited[r][c] = 1;
        q.push({r,c});
        bfs();
    }

    cout << cnt;
    return 0;
}