#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9'){
            sum += (int)(str[i]-'0');
        }
    }
    cout << sum;
    return 0;
}