#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    for(int i=s.length()-1; i>0; i--){
        if(i%2!=0) cout << s[i];
    }
    return 0;
}