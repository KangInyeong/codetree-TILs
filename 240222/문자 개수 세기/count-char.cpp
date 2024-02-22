#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    getline(cin , str);

    char ch;
    cin >> ch;

    int cnt = 0;
    for(int i=0; i<str.length(); i++){
        if(ch == str[i]) cnt++;
    }

    cout << cnt;
    return 0;
}