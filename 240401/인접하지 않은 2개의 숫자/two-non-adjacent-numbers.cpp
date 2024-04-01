#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[101] = {0,};
    for(int i=0; i<n; i++) cin >> arr[i];

    int maxsum = -1;
    for(int i=0; i<n-2; i++){
        for(int j=i+2; j<n; j++){
            if(maxsum < arr[i]+arr[j]) maxsum = arr[i]+arr[j];
        }   
    }

    cout << maxsum;

    return 0;
}