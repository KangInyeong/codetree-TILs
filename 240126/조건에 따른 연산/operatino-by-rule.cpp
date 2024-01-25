#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int cnt = 0;
    while(1){
        if(n%2==0){
            n *= 3;
            n += 1;
        }else{
            n *= 2;
            n += 2;
        }
        cnt++;
        if(n >= 1000) break;
    }
    cout << cnt;
    return 0;
}