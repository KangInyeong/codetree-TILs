#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
   
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i]) != 0) {
            if(str[i] >= 'A' && str[i] <= 'Z') cout << str[i];
            else{
                cout << (char)(str[i] - 'a' + 'A');
            }
        }
    }
    return 0;
}