#include <iostream>
using namespace std;

int main() {
   
    int a = 1;
    int b = 2;
    int c = 3;
    int total = a+b+c;
    a = b = c = total;
    cout << a << ' ' << b << ' ' << c;
    return 0;
}