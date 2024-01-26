#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int minsum = INT_MAX;
    int arr[101] = {0, };
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=1; j<=n; j++){
            if(i<j){
                sum += (arr[j]*(j-i));
            }else{
                sum += (arr[j]*(i-j));
            }
        }
        if(sum != 0 && sum < minsum) minsum = sum;
    }

    cout << minsum;
    return 0;
}