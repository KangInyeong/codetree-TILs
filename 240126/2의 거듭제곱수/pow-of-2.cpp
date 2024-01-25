#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int x = 0;
    while(1){
        if(n == pow(2,++x))break;
    }
    cout << x;
    return 0;
}