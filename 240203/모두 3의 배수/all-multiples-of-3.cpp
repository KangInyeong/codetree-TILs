#include <iostream>
using namespace std;

int main() {
    
    int a;
    int cnt = 0;

    for(int i=0; i<5; i++){
        cin >> a;
        if(a%3==0) cnt++;
    }

    if(cnt==5) cout << 1;
    else cout << 0;

    return 0;
}