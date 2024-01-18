#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sumval = 0;
    cin >> a >> b;
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            sumval += i;
            cnt++;
        }
    }

    cout << sumval << ' ';
    cout << fixed;
    cout.precision(1);
    
    cout << (double)sumval/cnt;
    return 0;
}