#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    int pos;
    cin >> str;
    while(1){
        cin >> pos;
        if(str.length()==1){
            break;
        }else if(pos > str.length()-1){
            str.erase(str.length()-1, 1);
        }else{
            str.erase(pos, 1);
        }
        cout << str << endl;
    }    
    

    return 0;
}