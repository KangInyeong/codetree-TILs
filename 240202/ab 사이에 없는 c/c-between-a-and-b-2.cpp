#include <iostream>
using namespace std;

int a, b, c;

bool checkNum(int i){
    if(i % c == 0) return false;
    else return true;
}
int main() {
    
    cin >> a >> b >> c;

    bool flag = false;
    for(int i=a; i<=b; i++){
        if(checkNum(i)){
            flag = true;
            break;
        }
        
    }

    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}