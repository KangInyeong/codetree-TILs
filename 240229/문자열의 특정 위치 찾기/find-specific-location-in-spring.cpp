#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    char c;
    cin >> c;

    int flag = false;
    for(int i=0; i<str.length(); i++){
        if(str[i] == c) {
            cout << i;
            flag = true;
            break;
        }
    }

    if(flag == false) cout << "No";
    return 0;
}