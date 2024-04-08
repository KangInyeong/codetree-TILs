#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[101] = {0,};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int minsum = INT_MAX;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=1; j<=n; j++){
            int dif = abs(j-i);
            int tmp = dif * arr[j];
            sum += tmp;
        }
        if(sum < minsum) minsum = sum;
    }

    cout << minsum;

    return 0;
}