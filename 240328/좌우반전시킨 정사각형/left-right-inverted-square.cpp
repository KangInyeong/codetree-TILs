#include <iostream>
using namespace std;

int main() {
    
    int arr[10][10] = {0, };
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = (j+1) * (i+1);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            cout << arr[i][j] << ' ';
        }cout << endl;
    }

    return 0;
}