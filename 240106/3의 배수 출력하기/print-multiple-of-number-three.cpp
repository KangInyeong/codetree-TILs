#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while(i<n+1){
        
        if(i%3==0) cout << i << ' ';
        i+=1;
    }
    return 0;
}