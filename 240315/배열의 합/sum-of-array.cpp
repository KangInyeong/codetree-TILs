#include <iostream>
using namespace std;

int main() {
    
    for(int i=0; i<4; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            int a;
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }

    return 0;
}