#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>

#define MAX_N 100
#define MAX_M 100

using namespace std;

int n, m;

int a[MAX_N][MAX_M];

bool visited[MAX_N][MAX_M];

int ans = INT_MAX;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && a[x][y] && !visited[x][y];
}

void FindMin(int x, int y, int cnt) {
    if(x == n - 1 && y == m - 1) {
        ans = min(ans, cnt);
        return;
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir], ny = y + dy[dir];

        if(CanGo(nx, ny)) {
            visited[nx][ny] = true;
            FindMin(nx, ny, cnt + 1);
            visited[nx][ny] = false;
        }
    }
}

int main() {

    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    
    FindMin(0, 0, 0);

    if(ans == INT_MAX) 
        ans = -1;    
    
    cout << ans;

    return 0;
}