#include <iostream>
using namespace std;

int main() {
    
    int arr[101][101];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(j<=i) sum += arr[i][j];
        }
    }
    cout << sum;

    return 0;
}