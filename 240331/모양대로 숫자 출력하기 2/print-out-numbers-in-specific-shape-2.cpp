#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a += 2;
            cout << a << ' ';
            if((a>=10) || (a+2>=10)) a = 0;
        }
        cout << endl;
    }

    return 0;
}