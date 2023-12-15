#include <iostream>
using namespace std;

int main() {
    
    int a = 5;
    int b = 6;
    int c = 7;

    int temp = b;
    int tmp = c;
    b = a;
    c = temp;
    a = tmp;

    cout << a << '\n' << b << '\n' << c;

    return 0;
}