#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    string str = "";
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        str += s;
    }

    cout << str;

    return 0;
}