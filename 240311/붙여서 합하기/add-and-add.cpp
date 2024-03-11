#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a, b;
    cin >> a >> b;
    string str2 = "";
    str2 += b;
    str2 += a;

    a += b;
    cout << stoi(a) + stoi(str2);

    return 0;
}