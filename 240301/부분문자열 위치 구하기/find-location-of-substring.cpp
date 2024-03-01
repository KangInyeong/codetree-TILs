#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    string s;
    cin >> s;

    bool flag = false;
    for(int i=0; i<str.length(); i++){
        if(str[i]==s[0]){
            for(int j=0; j<s.length(); j++){
                if(str[i+j] != s[j]) break;
                if(j==s.length()-1) flag = true;
            }
        }
        if(flag){
            cout << i;
            break;
        }else{
            cout << -1;
        }
    }

    return 0;
}