#include <iostream>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    char arr[16][16] = {};

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }

    int starty = 1;
    int startx = 1;
    int cnt = 0;
    for(int i=starty+1; i<n; i++){
        for(int j=startx+1; j<m; j++){
            if(arr[starty][startx] != arr[i][j]){
                char nowval = arr[i][j];
                for(int k=i+1; k<n; k++){
                    for(int l=j+1; l<m; l++){
                        if(nowval != arr[k][l]){
                            if(arr[k][l] != arr[n][m]) {
                                //cout << cnt++ << "번: (" << i << "," << j << ")->(" << k << "," << l << ")" << endl;
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}