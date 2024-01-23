#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int sumval = 0;
    for(int i=1; i<=100; i++){
        sumval += i;
        if(sumval >= n){
            cout << i;
            break;
        }
    }
    return 0;
}