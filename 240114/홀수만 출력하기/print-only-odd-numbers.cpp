#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a % 2 != 0 && a % 3 == 0) cout << a << endl;
    }
    return 0;
}