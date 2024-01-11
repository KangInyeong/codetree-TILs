#include <iostream>
using namespace std;

#define ASCII_NUM 128
int mapper[ASCII_NUM];

int main() {
    
    int n;
    cin >> n;

    int dy[4] = {0,0,1,-1}; //동,서,남,북
    int dx[4] = {1,-1,0,0};
    mapper['W'] = 1;
    mapper['S'] = 2;
    mapper['N'] = 3;
    mapper['E'] = 0;

    int x = 0;
    int y = 0;
    int dir_num; 
    int t = 0;

    int flag = 0;
    for(int i=0; i<n; i++){
        char dir;
        int times;
        cin >> dir >> times;

        //이동
        for(int j=0; j<times; j++){
            int ny = y + dy[mapper[dir]];
            int nx = x + dx[mapper[dir]];
            
            y += dy[mapper[dir]];
            x += dx[mapper[dir]];
            t++;
            if(x==0 && y==0) {
                flag = 1;
                break;
            }
           
        }
        if(flag == 1) break;
    }

    if(x!=0 && y!=0) cout << -1;
    else cout << t;
    return 0;
}