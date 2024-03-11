#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2;
    cin >> str1 >> str2;

    string newstr1 = "";
    for(int i=0; i<str1.length(); i++){
        if(str1[i]>='0'&&str1[i]<='9') newstr1 += str1[i];
        else continue;
    }

    string newstr2 = "";
    for(int i=0; i<str2.length(); i++){
        if(str2[i]>='0'&&str2[i]<='9') newstr2 += str2[i];
        else continue;
    }

    int a = stoi(newstr1);
    int b = stoi(newstr2);
    
    cout << a + b;

    return 0;
}