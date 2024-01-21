#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(0);
    cout << (double)pow(a,b);
    return 0;
}