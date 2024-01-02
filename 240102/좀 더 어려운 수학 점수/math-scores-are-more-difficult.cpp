#include <iostream>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;

    if(am == bm){
        if(ae > be){
            cout << "A";
        }else{
            cout << "B";
        }
    }else if(ae == be){
        if(am > bm){
            cout << "A";
        }else{
            cout << "B";
        }
    }
    return 0;
}