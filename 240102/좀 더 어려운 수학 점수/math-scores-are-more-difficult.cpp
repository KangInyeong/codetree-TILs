#include <iostream>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;

    if(am == bm){
        if(ae > bm){
            cout << "A";
        }else{
            cout << "B";
        }
    }else if(am > bm){
        cout << "A";
    }else{
        cout << "B";
    }
    return 0;
}