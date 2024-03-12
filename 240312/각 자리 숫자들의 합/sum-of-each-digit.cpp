#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int sum = 0;
    string str = to_string(n);
    for(int i=0; i<str.length(); i++){
        sum += (int)(str[i]-'0');
    }
    cout << sum;
    
    return 0;
}