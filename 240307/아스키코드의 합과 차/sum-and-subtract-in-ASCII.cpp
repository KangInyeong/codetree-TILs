#include <iostream>
#include <string>
using namespace std;

int main() {
    
    char a, b;
    cin >> a >> b;
    if(a>b){
        cout << (int)a+b << ' ' << (int)a-b;
    }else{
        cout << (int)a+b << ' ' << (int)b-a;
    }

    return 0;
}