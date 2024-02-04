#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int cnt = 1;
    for(int i=1; i<n*2; i++){
        if(i<n){
            for(int j=1; j<=cnt; j++){
                cout << "* ";
            }

            if(n==cnt){
                cnt--;
            }else{
                cnt++;
            }
        }else{
            for(int j=cnt; j>=1; j--){
                cout << "* ";
            }
            cnt--;
        }
        cout << endl;
    }
    return 0;
}