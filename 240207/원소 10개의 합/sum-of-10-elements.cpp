#include <iostream>
using namespace std;

int main() {
    
    int sum = 0;
    for(int i=0; i<10; i++) {
        int a;
        cin >> a;
        sum += a;
    }

    cout << sum;

    return 0;
}