#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    
    int n;
    cin >> n;
    int minval = INT_MAX;
    int cnt = 0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(minval > a){
            cnt = 1;
            minval = a;
        }else if(minval == a){
            cnt++;
        }

    }
        cout << minval << ' ' << cnt;
    return 0;
}