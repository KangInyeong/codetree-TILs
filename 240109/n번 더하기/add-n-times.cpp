#include <iostream>
using namespace std;

int main() {
    
    int a, n;
    cin >> a >> n;

    int num = n;

    while(n--){
        a += num;
        cout << a << endl;
    }

    return 0;
}