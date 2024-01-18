#include <iostream>
using namespace std;

int main() {
    int sumval=0;
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i%5==0) sumval+=i;
    }

    cout << sumval;
    return 0;
}