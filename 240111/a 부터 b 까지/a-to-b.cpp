#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    int i = a;
    while(i<=b){
        cout << i << ' ';
        if(i%2!=0) i*=2;
        else i+=3;
    }

    return 0;
}