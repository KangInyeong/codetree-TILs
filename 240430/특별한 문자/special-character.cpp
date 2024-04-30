#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    
    string str;
    unordered_map<char, int> record;

    cin >> str;
    for(int i=0; i<str.length(); i++){
        record[str[i]]++;
    }

    for(int i=0; i<str.length(); i++){
        if(record[str[i]] == 1){
            cout << str[i];
            return 0;
        }
    }

    cout << "None";
    
    return 0;
}