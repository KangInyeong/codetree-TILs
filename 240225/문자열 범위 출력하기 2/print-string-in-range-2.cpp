#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int inp;
    cin >> inp;
    
    int len = s.length();
	int cnt = 0;
	
	for(int i = len - 1; i >= 0; i--) {
		if(cnt >= inp)
			break;
		cout << s[i];
		cnt++;
	}

    return 0;
}