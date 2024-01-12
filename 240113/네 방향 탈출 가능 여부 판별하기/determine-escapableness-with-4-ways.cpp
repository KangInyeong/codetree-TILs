#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int arr[101][101];
int visited[101][101];
struct Node{
    int y;
    int x;
};
queue<Node> q;

void bfs(){
    
    int dy[2] = {0,1};
    int dx[2] = {1,0};

    while(!q.empty()){

        Node target = q.front();
        q.pop();

        for(int i=0; i<2; i++){
            int ny = target.y + dy[i];
            int nx = target.x + dx[i];
            if(ny<0 || nx<0 || ny>=n || nx>=m) continue;
            if(arr[ny][nx]==0) continue;
            if(visited[ny][nx]==1)continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }
}

int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    q.push({0,0});
    visited[0][0] = 1;
    bfs();

    cout << visited[n-1][m-1];
    return 0;
}