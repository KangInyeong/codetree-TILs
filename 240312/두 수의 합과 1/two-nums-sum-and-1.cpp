#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    int sum = a + b;

    int cnt = 0;
    string result = to_string(sum);
    for(int i=0; i<result.length(); i++){
        if(result[i] == '1') cnt++;
    }

    cout << cnt;
    
    return 0;
}