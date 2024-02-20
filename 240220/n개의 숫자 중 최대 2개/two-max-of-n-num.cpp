#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

int main() {
    
    int n;
    cin >> n;
    int arr[101] = {0, };
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, desc);
    cout << arr[0] << ' ' << arr[1];


    return 0;
}