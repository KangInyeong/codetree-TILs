#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a==10) a = 1;
            cout << a++;
        }
        cout << endl;
    }

    return 0;
}