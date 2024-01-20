#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int sumval = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sumval += i;
        }
    }
    if(sumval == n) cout << "P";
    else cout << " N";
    
    return 0;
}