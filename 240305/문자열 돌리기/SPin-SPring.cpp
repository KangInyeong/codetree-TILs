#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    int l = str.length();
    cout << str << endl;
    for(int i=0; i<l; i++){
        str = str.substr(l - 1, 1) + str.substr(0, l - 1);
		cout << str << endl;
    }

    return 0;
}