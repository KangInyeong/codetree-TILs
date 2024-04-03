#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    stack<char> s;
    int flag = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            s.push('(');
        }else{
            if(s.empty()){
                flag = 1;
                break;
            }else{
                s.pop();
            }
        }
    }

    if(!s.empty() || flag == 1) cout << "No";
    else cout << "Yes";

    return 0;
}