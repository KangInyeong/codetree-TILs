#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int cnt = n;
    for(int i=1; i<2*n; i++){
        if(i<=n){
            
            for(int j=cnt; j>0; j--){
                cout << "* ";
            }
            if(i==n){
                cnt++;
            }else{
                cnt--;
            }
        }else{
            for(int j=1; j<=cnt; j++){
                cout << "* ";
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}