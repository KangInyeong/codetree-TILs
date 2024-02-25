#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int inp;
    cin >> inp;
    int cnt = 0;
    for (int i = s.length()-1; cnt != inp; i--) {
        cout << s[i];
        cnt++;
    }

    return 0;
}