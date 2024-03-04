#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    cout << str.substr(1, str.length()) + str.substr(0, 1);

    return 0;
}