#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i%c == 0) cnt++;
    }

    if(cnt>0) cout << "YES";
    else cout << "NO";
    return 0;
}