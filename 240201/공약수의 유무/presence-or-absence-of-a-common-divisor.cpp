#include <iostream>
using namespace std;

bool checkNum(int i, int target){
    if(target % i == 0) return true;
    else return false;
}

int main() {
    
    int a, b;
    cin >> a >> b;


    bool flag = false;

    for(int i=a; i<=b; i++){
        if(checkNum(i, 1920) && checkNum(i, 2880)){
            flag = true;
            break;
        }
    }

    if(flag) cout << 1;
    else cout << 0;

    return 0;
}