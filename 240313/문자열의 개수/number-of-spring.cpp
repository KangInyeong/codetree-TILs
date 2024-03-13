#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    int cnt = 0;
    string strarr[201] = {};

    while(1){
        cin >> str;
        if(str == "0") break;
        cnt++;
        if(cnt%2!=0) strarr[cnt-1] = str;
    }

    cout << cnt << endl;
    for(int i=0; i<cnt; i++){
        if(strarr[i] == "") continue;
        cout << strarr[i] << '\n';
    }

    return 0;
}