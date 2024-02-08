#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    int pos = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0){
            arr[pos] = a;
            pos++;
        }
    }

    for(int j=pos-1; j>=0; j--){
        cout << arr[j] << ' ';
    }
    return 0;
}