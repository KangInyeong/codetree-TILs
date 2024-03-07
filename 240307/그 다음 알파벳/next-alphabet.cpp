#include <iostream>
#include <string>
using namespace std;

int main() {
   
    char a;
    cin >> a;

    if(a=='z') cout << 'a';
    else {
        int newnum = (int)a + 1;
        cout << (char)newnum;
    }
        
    return 0;
}