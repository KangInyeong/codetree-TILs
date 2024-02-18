#include <iostream>
using namespace std;

int main() {
    
    int n;
    int max_n = -1;
    for(int i=0; i<10; i++){
        cin >> n;
        if(n > max_n) max_n = n;
    }

    cout << max_n;

    return 0;
}