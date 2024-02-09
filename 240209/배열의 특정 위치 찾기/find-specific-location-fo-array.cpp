#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    int sum = 0;
    int flag = 1;
    for(int i=0; i<10; i++){
        if(i == flag){
            sum += arr[i];
            flag += 2;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double) (arr[2] + arr[5] + arr[8]) / 3;
    return 0;
}