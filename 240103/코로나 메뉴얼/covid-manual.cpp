#include <iostream>
using namespace std;

int main() {
    
    int flag = 0;

    for(int i=0; i<3; i++){
        
        char state;
        int tem;
        cin >> state >> tem;

        if(state == 'Y' && tem >= 37){
            flag++;
        }
    }

    if(flag >= 2){
            cout << 'E';
            return 0;
        }

    cout << 'N';
    return 0;
}