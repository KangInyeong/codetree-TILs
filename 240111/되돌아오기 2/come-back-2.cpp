#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string command;
    cin >> command;

    int dy[4] = {-1,0,1,0};
    int dx[4] = {0,1,0,-1};
    int x = 0;
    int y = 0;
    int dir = 0;
    int t = 0;
    int flag = 0;

    for(int i=0; i<command.length(); i++){
        char c = command[i];
        
        t++;
        if(c=='L'){
            dir = (dir -1 + 4) % 4;
        }else if(c=='R'){
            dir = (dir + 1) % 4;
        }else if(c=='F'){
            y += dy[dir];
            x += dx[dir];
            if(y==0 && x==0) {
                flag = 1;
                break;
            }
        }
    }

    if(flag==0) 
        cout << -1;
    else    
        cout << t;

    return 0;
}