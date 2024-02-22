#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;
    cin >> a;
    int cnt = 0;
    for(int i=0; i<5; i++){
        if(str[i][2] == a || str[i][3] == a){
            cout << str[i] << endl;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}