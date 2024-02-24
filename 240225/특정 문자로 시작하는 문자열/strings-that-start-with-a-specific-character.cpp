#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    string str[40];
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    char c;
    cin >> c;
    int cnt = 0;
    int len = 0;
    for(int i=0; i<n; i++){
        if(str[i][0]==c){
            cnt++;
            len += str[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << cnt << ' ' << (float)len/cnt;


    return 0;
}