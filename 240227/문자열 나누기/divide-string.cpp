#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    string str = "";
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        str += s;
    }
    for(int i=0; i<str.length(); i+=5){
        for(int j=i; j<i+5; j++){
            if(j>=str.length()) break;
            cout << str[j];
        }
        cout << endl;
    }
    return 0;
}