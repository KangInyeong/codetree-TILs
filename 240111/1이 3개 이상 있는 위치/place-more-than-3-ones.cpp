#include <iostream>
using namespace std;

int n;
int arr[100][100];

bool InRange(int x, int y){
    return (0 <= x && x < n && 0 <= y && y < n);
}

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int IsOne(int x, int y){
    int cnt = 0;

    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(InRange(ny, nx) && arr[ny][nx] == 1) cnt++;
    }

    return cnt;
}

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(IsOne(j, i) >= 3) cnt++;
        }
    }

    cout << cnt;
    return 0;
}