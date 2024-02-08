#include <iostream>
using namespace std;

int main() {
   
    int arr[10];
    int finalnum = 0;
    int sum = 0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] == 0){
            finalnum = i;
            break;
        }
    }

    cout << fixed;
    cout.precision(1);
    if(finalnum == 0){
        cout << sum << ' ' << (double)sum/10;
    }else{
        cout << sum << ' ' << (double)sum/finalnum;
    }
    return 0;
}