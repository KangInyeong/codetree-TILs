#include <iostream>
using namespace std;

int main() {
   
    int n, m;
    cin >> n >> m;
    int arr[11][11] = {};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int a;
            cin >> a;
            if(a == arr[i][j]){
                arr[i][j] = 0;
            }else arr[i][j] = 1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << ' ';
        }cout << endl;
    }


    return 0;
}