#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        sum += a;
    }
    string str = to_string(sum);
    string result = str.substr(1, str.length()-1) + str.substr(0, 1);
    cout << result;

    return 0;
}