#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr[i] = pow(arr[i],2);
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}