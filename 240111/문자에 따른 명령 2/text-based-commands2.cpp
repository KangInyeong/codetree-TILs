#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int x = 0;
    int y = 0;
    int dir = 0;
    int dx[4] = {0, 1, 0, -1}; //북, 동, 남, 서
    int dy[4] = {1, 0, -1, 0};

    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'L'){
            dir = (dir + 3) % 4;
        }else if(str[i] == 'R'){
            dir = (dir + 1) % 4;
        }else if(str[i] == 'F'){
            x = x + dx[dir];
            y = y + dy[dir];
        }
    }

    cout << x << ' ' << y;

    return 0;
}