#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    int cnt = 0;
    int sum = 0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(arr[i]%2 == 0 && arr[i]!=0){
            cnt++;
            sum += arr[i];
        }
        if(arr[i] == 0){
           break; 
        }
    }

    cout << cnt << ' ' << sum;
    return 0;
}