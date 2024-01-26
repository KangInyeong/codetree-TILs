#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[101] = {0, };
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            for(int k=j+1; k<=n; k++){
                if(arr[i] <= arr[j] && arr[j] <= arr[k]) sum++;
            }
        }
    }

    cout << sum;
    return 0;
}