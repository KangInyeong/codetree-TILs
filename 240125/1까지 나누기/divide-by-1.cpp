#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int i=1;
    while(n>1){
        n /= i;
        i++;
    }
    cout << i-1;
    return 0;
}