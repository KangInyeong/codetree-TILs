#include <iostream>
using namespace std;

int n, m;
int arr[1001][1001];
int visited[1001];

int cnt = 0;

void dfs(int vertex){
    //노드 1부터 시작
    for(int i=1; i<=n; i++){
        if(arr[vertex][i] && !visited[i]){
            cnt++;
            visited[i] = 1;
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

    //시작노드 방문처리
    visited[1] = 1;
    dfs(1);
    cout << cnt;

    return 0;
}