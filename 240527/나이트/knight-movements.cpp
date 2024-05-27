#include <iostream>
#include <queue>
#include <algorithm>
#include <climits>

#define MAX_N 100
#define DIR_NUM 8

using namespace std;

int n;
int r1, c1, r2, c2;

queue<pair<int, int> > q;
bool visited[MAX_N][MAX_N];
int step[MAX_N][MAX_N]; 

int ans = INT_MAX;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool CanGo(int x, int y) {
    return InRange(x, y) && !visited[x][y];
}

void Push(int nx, int ny, int new_step) {
    q.push(make_pair(nx, ny));
    visited[nx][ny] = true;
    step[nx][ny] = new_step;
}

void FindMin() {
    while(!q.empty()) {
        pair<int, int> curr_pos = q.front();
        int x = curr_pos.first, y = curr_pos.second;
        q.pop();

        int dx[DIR_NUM] = {-2, -2, -1, -1,  1, 1,  2, 2};
        int dy[DIR_NUM] = {-1,  1, -2,  2, -2, 2, -1, 1};

        for(int dir = 0; dir < DIR_NUM; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];

            if(CanGo(nx, ny))
                Push(nx, ny, step[x][y] + 1);
        }
    }

    if(visited[r2][c2])
        ans = step[r2][c2];
}

int main() {
    
    cin >> n;
    cin >> r1 >> c1 >> r2 >> c2;
    
    r1--; c1--; r2--; c2--;
    
    Push(r1, c1, 0);
    FindMin();

    if(ans == INT_MAX) 
        ans = -1;   
    
    cout << ans;

    return 0;
}