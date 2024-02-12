#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[101];
    int zzak[101];
    int flag = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0) zzak[flag++] = arr[i];
    }

    for(int i=0; i<flag; i++){
        cout << zzak[i] << ' '; 
    }
    return 0;
}