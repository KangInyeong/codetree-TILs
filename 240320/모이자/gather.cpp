#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[101] = {};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int minval = INT_MAX;
    for(int i=1; i<=n; i++){
        int target = arr[i];
        int distance = 0;
        for(int j=1; j<=n; j++){
            distance += (abs(j-i) * arr[j]);
        }
        if(distance < minval) minval = distance;
    }

    cout << minval;

    return 0;
}