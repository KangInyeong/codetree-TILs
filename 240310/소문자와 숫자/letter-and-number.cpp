#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            if(str[i]>='a'&&str[i]<='z') cout << str[i];
            else cout << (char)(str[i]-'A'+'a');
        }else{
            if(str[i]>='0' && str[i]<='9') cout << str[i];
        }
    }
    return 0;
}