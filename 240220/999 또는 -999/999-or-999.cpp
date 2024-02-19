#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int minval = INT_MAX;
    int maxval = INT_MIN;
    while(1){
        int a;
        cin >> a;

        if(a==999 || a==-999){
            break;
        }

        if(minval > a) minval = a;
        if(maxval < a) maxval = a;

    }

    cout << maxval << ' ' << minval;

    return 0;
}