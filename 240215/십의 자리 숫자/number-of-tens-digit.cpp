#include <iostream>
using namespace std;

int main() {
    
    int arr[10] = {0, };
    while(1){
        int a;
        cin >> a;
        if(a==0) {
            break;
        }

        if(a<10) continue;

        int ten = a / 10;
        arr[ten]++;

    }

    for(int i=1; i<=9; i++){
        cout << i << " - " << arr[i] << endl;
    }

    return 0;
}