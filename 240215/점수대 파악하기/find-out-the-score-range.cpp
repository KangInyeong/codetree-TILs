#include <iostream>
using namespace std;

int main() {
    
    int arr[11] = {0, };
    while(1){
        int a;
        cin >> a;
        if(a==0) break;

        if(a==100){
            arr[10]++;
        }
        else if(a>=10){
            int ten = a / 10;
            arr[ten]++;
        }
    }

    for(int i=10; i>=1; i--){
        cout << i*10 << " - " << arr[i] << endl;
    }

    return 0;
}