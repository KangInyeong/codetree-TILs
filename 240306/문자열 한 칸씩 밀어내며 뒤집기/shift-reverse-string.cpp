#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int q;
    cin >> str >> q;
    for(int i=0; i<q; i++){
        int a;
        cin >> a;
        if(a==1){
            char front = str[0];
            str.erase(0,1);
            str += front;
        }else if(a==2){
            char last = str[str.length()-1];
            str.erase(str.length()-1,1);
            str = last + str;            
        }else if(a==3){
            string newstr = "";
            for(int i=str.length()-1; i>=0; i--){
                newstr += str[i];
            }
            str = newstr;
        }
        cout << str << endl;
    }

    return 0;
}