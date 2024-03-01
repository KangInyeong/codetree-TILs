#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    int cnte = 0;
    int cntb = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == 'e'){
            if(str[i+1]=='e'){
                cnte++;
            }else if(str[i+1] == 'b'){
                cntb++;
            }
        }
    }

    cout << cnte << ' ' << cntb;
    return 0;
}