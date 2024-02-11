#include <iostream>
using namespace std;

int main() {
    
    int arr[101];
    int flag = 0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]%3 == 0 && arr[i]!=0){
            flag = i;
            break;
        }
    }

    cout << arr[flag-1];
    return 0;
}