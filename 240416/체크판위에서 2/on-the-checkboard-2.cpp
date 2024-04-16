#include <iostream>
using namespace std;

int main() {
    
    int r, c;
    cin >> r>> c;
    int arr[16][16] = {0,}; 
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            char c;
            cin >> c;
            if(c=='W') arr[i][j] = 1;
            else if(c=='B') arr[i][j] = 2;
        }
    }

    int cnt = 0;
    for(int i = 1; i < r; i++)
        for(int j = 1; j < c; j++)
            for(int k = i + 1; k < r - 1; k++)
                for(int l = j + 1; l < c - 1; l++)
                    if(arr[0][0] != arr[i][j] && 
                       arr[i][j] != arr[k][l] &&
                       arr[k][l] != arr[r - 1][c - 1])
                        cnt++;

    cout << cnt;

    return 0;
}