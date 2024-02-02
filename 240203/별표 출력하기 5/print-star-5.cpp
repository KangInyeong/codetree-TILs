#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for(int i=1; i<=n+1; i++){
        for(int j=n-i+1; j>=1; j--){
            for(int k=1; k<=n-i+1; k++) cout << "*";   
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}