#include <iostream>
using namespace std;

int main() {
    
    int sum = 0;
    int arr[10] = {};

    cout << fixed;
    cout.precision(1);
    int cnt = 0;
    for(int i=0; i<10; i++){
        int a;
        cin >> arr[i];
        sum+=arr[i];
        
        if(arr[i]>=250){
            sum -= arr[i]; 
            break;
        }

        cnt++;
    }

    cout << sum << ' ' << (double)sum/cnt;
    
    return 0;
}