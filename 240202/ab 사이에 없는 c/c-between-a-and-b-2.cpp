#include <iostream>
using namespace std;

int a, b, c;

bool checkNum(int i){
    if(i % c == 0) return true;
    else return false;
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

    if(flag) cout << "NO";
    else cout << "YES";
    return 0;
}