#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[21][21] = {};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int maxval = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++){
            int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            maxval = max(maxval, sum);
        }
    }

    cout << maxval;

    return 0;
}