#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a;
    int sumval = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        sumval += a;
        cnt++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sumval  << ' ' << (float)sumval/cnt;


    return 0;
}