#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str1, str2;
    cin >> str1 >> str2; 
    int num = max(str1.length(), str2.length());
    if(str1.length()==str2.length()){
        cout << "same";
    }else{
        cout << "Coding " << num;
    }

    return 0;
}