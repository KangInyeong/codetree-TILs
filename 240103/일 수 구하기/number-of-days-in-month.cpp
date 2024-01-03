#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    if(y == 2){
        cout << 28;
        return 0;
    }

    if((y%2==0 && y<7) || (y%2==1 && y>=7)){
        cout << 30;
    }else{
        cout << 31;
    }
    return 0;
}