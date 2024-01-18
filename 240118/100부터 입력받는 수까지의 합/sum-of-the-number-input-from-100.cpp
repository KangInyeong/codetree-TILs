#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;

    int sumval = 0;
    for(int i=n; i<=100;i++)sumval += i;

    cout << sumval;
    return 0;
}