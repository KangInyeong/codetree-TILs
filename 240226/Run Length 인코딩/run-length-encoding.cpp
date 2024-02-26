#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    char a = '1';
    int cnt = 0;
    string encoding = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != a){
            if(cnt>0){
                encoding += to_string(cnt);
            }
            a = s[i];
            encoding += a;
            cnt = 1;
        }else{
            cnt++;
        }
        if(i==s.length()-1){
            encoding += to_string(cnt);
        }
    }

    cout << encoding.length() << endl;
    cout << encoding;
    return 0;
}