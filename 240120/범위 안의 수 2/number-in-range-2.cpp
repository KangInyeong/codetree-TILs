#include <iostream>
using namespace std;

int main() {
    
    int a;
    int sumval = 0;
    int cnt = 0;
    for(int i=0; i<10; i++){
        cin >> a;
        if(a >= 0 && a <= 200) {
            sumval += a;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);

    cout << sumval << ' ' << (float)sumval/cnt;
    return 0;
}