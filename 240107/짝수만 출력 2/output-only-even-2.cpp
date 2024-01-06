#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    cin >> b >> a;

    while(a<=b){
        if(b%2==0) cout << b<< ' ';
        b -= 1;
    }
    return 0;
}