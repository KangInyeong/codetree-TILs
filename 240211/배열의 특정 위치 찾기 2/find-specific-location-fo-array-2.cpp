#include <iostream>
using namespace std;

int main() {
    
    int arr[101];
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(i%2==0){
            sum1 += arr[i];
        }else{
            sum2 += arr[i];
        }
    }

    if(sum1 > sum2){
        cout << sum1 - sum2;
    }else{
        cout << sum2 - sum1;
    }

    return 0;
}