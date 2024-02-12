#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[1001];
    arr[0] = 1;
    arr[1] = n;
    int flag = 2;
    while(1){
        arr[flag] = arr[flag-1] + arr[flag-2];
        flag++;
        if(arr[flag-1] > 100) break;
    }

    for(int i=0; i<flag; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}