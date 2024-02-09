#include <iostream>
using namespace std;

int main() {
    
    int arr[101];
    int flag = 0;

    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]==0){
            flag = i;
            break;
        }
    }

    cout << arr[flag-1] + arr[flag-2] + arr[flag-3];
    return 0;
}