#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == min({a,b,c}));
    cout << ' ';
    cout << (a==b && b==c && c==a);
    return 0;
}