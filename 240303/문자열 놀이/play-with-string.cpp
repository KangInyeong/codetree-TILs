#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    int q;
    cin >> s >> q;

    for(int i=0; i<q; i++){
        int com;
        cin >> com;
        if(com == 1){
            int a, b;
            cin >> a >> b;
            char tmp = s[a-1];
            s[a-1] = s[b-1];
            s[b-1] = tmp;
        }else{
            char a, b;
            cin >> a >> b;
            for(int i=0; i<s.length(); i++){
                if(s[i] == a){
                    s[i] = b;
                }
            }
        }
        cout << s << endl;
    }


    return 0;
}