#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[101][101] = {0, };

    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = num++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << ' ';
        } cout << endl;
    }

    return 0;
}