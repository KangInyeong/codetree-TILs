#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int m;
    cin >> m;

    int cnt=0;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a == m){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}