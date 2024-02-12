#include <iostream>
using namespace std;

int main() {
    
    int n; 
    int tmp = 0;
    int arr[101];

    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        if(n%2==0){
            arr[tmp++] = n/2;
        }else{
            arr[tmp++] = n + 3;
        }
    }

    for(int i=0; i<tmp; i++){
        cout << arr[i] << ' ';
    }
    
    return 0;
}