#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n;
    cin >> n;
    n *= 100;
    n = round(n);
    n /= 100;
    cout << n;
    return 0;
}