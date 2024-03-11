#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2;
    cin >> str1 >> str2;

    string newstr1 = "";
    for(int i=0; i<str1.length(); i++){
        if(str1[i]>=0&&str1[i]<=9) newstr1 += str1[i];
        else break;
    }
    string newstr2 = "";
    for(int i=0; i<str2.length(); i++){
        if(str2[i]>=0&&str2[i]<=9) newstr2 += str2[i];
        else break;
    }

    cout << stoi(str1) + stoi(str2);

    return 0;
}