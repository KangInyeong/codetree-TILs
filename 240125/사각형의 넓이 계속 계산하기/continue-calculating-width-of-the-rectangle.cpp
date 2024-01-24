#include <iostream>
using namespace std;

int main() {
    
    int w, h;
    char l;
    while(1){
        cin >> w >> h >> l;
        cout << w * h << endl;
        if(l=='C')break;
    }
    return 0;
}