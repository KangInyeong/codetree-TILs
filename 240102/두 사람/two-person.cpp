#include <iostream>
using namespace std;

int main() {
    int aa, ba;
    char as, bs;

    cin >> aa >> as >> ba >> bs;
    if((aa>=19 && as=='M') || (ba>=19&&bs=='M')){
        cout << 1;
    }else{
        cout << 0;
    }
    return 0;
}