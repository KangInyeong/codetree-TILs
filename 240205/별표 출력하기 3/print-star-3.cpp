#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int minus = 1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i-1; j++){
            cout << "  ";
        }
        
        int cnt = 2*n - i;
        if(i>1){
            cnt -= minus;
            minus ++;
        }
        for(int j=1; j<=cnt; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}