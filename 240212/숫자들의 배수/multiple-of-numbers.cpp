#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin >> a;

    int last = a * 5 * 5;
    int tmp = 0;
    int arr[1001];
    int twice = 0;
    for(int i=a; i<=last; i+=a){
        arr[tmp++] = i;
        if(arr[tmp-1] % 5 == 0){
            twice++;
            if(twice == 2) break;
        }
    }
    for(int i=0; i<tmp; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}