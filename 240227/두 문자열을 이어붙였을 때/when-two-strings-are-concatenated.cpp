#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string a;
    cin >> a;
    string b;
    cin >> b;

    string first = "";
    first += a;
    first += b;
    string second = "";
    second += b;
    second += a;

    if(first == second) cout << "true";
    else cout << "false";
    
    return 0;
}