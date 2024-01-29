#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    char flag = 'N';
    for(int i=2; i<n; i++){
        if(n%i==0) flag = 'C';
    }

    cout << flag;
    return 0;
}