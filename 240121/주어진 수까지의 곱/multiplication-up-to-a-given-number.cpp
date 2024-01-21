#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int mulval = 1;
    for(int i=a; i<=b; i++) mulval *= i;
    cout << mulval;
    return 0;
}