#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    bool exists_ee = false;
    bool exists_ab = false;
    for (int i = 0; i < str.length() - 1; i++) {
		if (str[i] == 'e' && str[i + 1] == 'e') {
			exists_ee = true;
		}
        if (str[i] == 'a' && str[i + 1] == 'b') {
			exists_ab = true;
		}
	}
    
    if(exists_ee) cout << "Yes";
    else cout << "No";

    if(exists_ab) cout << ' ' << "Yes";
    else cout << " No";
    return 0;
}