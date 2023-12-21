#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cin >> a;
    printf("%0.1lf\n", round(a * 30.48 * 10) / 10);
}