#include <iostream>
using namespace std;

int main() {
    
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            char a;
            cin >> a;
            cout << (char)(a-'a'+'A') << ' ';
        }
        cout << endl;
    }

    return 0;
}