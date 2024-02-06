#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for(int i=0; i<=n*2-2; i++){
        if(i<=n-1){
            for(int j=0; j<i; j++){
                cout << "  ";
            }
            for(int j=1; j<n*2-2*i; j++){
                cout << "* ";
            }
        }else{
            int cnt = 0;
            for(int j=n-i+1; j>=0; j--){
                cout << "  ";
                cnt++;
            }
            for(int j=0; j<2*n-1; j++){
                cnt++;
                if(cnt == i+2) break;
                cout << "* ";
            }
        }
        
        cout << endl;
    }
    return 0;
}