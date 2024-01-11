#include <iostream>
using namespace std;

int n, m;
int arr[1001][1001];
int visited[1001][1001];

int cnt = 0;

void dfs(int vertex){
    for(int i=0; i<=n; i++){
        if(arr[vertex][i] && !visited[vertex][i]){
            cnt++;
            visited[vertex][i] = 1;
            visited[i][vertex] = 1;
            dfs(i);
        }
    }
}
int main() {
    cin >> n >> m;

    int x, y;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }

    dfs(1);
    cout << cnt -1;

    return 0;
}