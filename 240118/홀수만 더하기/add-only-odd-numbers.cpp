#include <iostream>
using namespace std;

int main() {
    int sumval = 0;
    int n, a;
    cin>> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2!=0 && a%3==0) {
            sumval += a;
        }
    }
    cout << sumval;
    return 0;
}