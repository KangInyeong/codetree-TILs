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
        visited[r-1][c-1] = 1;
        q.push({r-1,c-1});
    }
    
    bfs();

    int cnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j]) cnt++;
        }
    }

    cout << cnt;
    return 0;
}