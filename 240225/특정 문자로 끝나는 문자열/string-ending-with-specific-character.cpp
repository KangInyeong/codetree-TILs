#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str[10];
    for(int i=0; i<10; i++){
        cin >> str[i];
    }
    char a;
    cin >> a;
    bool flag = false;
    for(int i=0; i<10; i++){
        if(str[i][str[i].length()-1] == a){
            cout << str[i] << endl;
            flag = true;
        }
    }
    if(flag == false){
        cout << "None";
    }
    return 0;
}