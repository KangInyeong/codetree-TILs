#include <iostream>
using namespace std;

int n, m;
int grid[101][101];
int visited[101][101];
int dy[2] = {1, 0};
int dx[2] = {0, 1};
int order = 1;

void dfs(int y, int x){
    for(int i=0; i<2; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(visited[ny][nx]!=0) continue;
        if(ny<0 && nx<0 && ny>=n && nx>=m) continue;
        if(grid[ny][nx] == 0) continue;

        visited[ny][nx] == order++;
        dfs(ny, nx);
    }
}

int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    visited[0][0] = order++;
    dfs(0,0);

    if(visited[n][m] == 1) cout << 1;
    else cout << 0;

    return 0;
}