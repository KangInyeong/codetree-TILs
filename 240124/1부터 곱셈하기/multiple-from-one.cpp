#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int mulval = 1;
    for(int i=1; i<=10; i++){
        mulval *= i;
        if(mulval >= n){
            cout << i;
            break;
        }
    }
    return 0;
}