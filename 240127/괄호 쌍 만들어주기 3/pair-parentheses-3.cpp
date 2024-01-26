#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '('){
            for(int j=i; j<str.length(); j++){
                if(str[j] == ')'){
                    sum++;
                }
            }
        }
    }
    cout << sum;
    return 0;
}