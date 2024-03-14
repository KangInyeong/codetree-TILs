#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a, b;
    cin >> a >> b;

    int n=1;
    bool flag = false;
    for(int i=0; i<a.length(); i++){
        string newstr = a.substr(a.length()-n, n) + a.substr(0,a.length()-n);
        
        if(newstr == b) {
            flag = true;
            break;
        }
        n++;
    }

    if(flag) cout << n;
    else cout << -1;

    return 0;
}