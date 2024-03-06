#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a;
    cin >> a;
    string com;
    cin >> com;
    for(int i=0; i<com.length(); i++){
        if(com[i] == 'L'){
            char front = a[0];
            a.erase(0,1);
            a += front;
        }else if(com[i] == 'R'){
            char last = a[a.length()-1];
            string newstr = "";
            newstr += last;
            a.erase(a.length()-1, 1);
            newstr += a;
            a = newstr;
        }
    }
    cout << a;

    return 0;
}