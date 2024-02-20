#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[1001];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int flag = -1;
    for(int i=n-1; i>0; i--){
        if(arr[i-1] != arr[i]){
            flag = arr[i];
            break;
        }
    }

    cout << flag;
    return 0;
}