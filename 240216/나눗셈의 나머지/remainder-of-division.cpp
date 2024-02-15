#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    int arr[10] = {0, };
    while(1){
        cin >> a >> b;
        if(a<=1){
            break;
        }

        int tmp = a%b;
        a/=b;
        arr[tmp]++;
    }

    int result = 0;
    for(int i=0; i<=9; i++){
        //cout << arr[i] << ' ';
        //if(arr[i]!=0){
            result += pow(arr[i], 2);
        //}
    }

    cout << result;
    return 0;
}