#include <iostream>
using namespace std;

int main() {
    
    int sx = 0, sy = 0;
    
    int n;
    cin >> n;
    
    char dir;
    int times;

    char directions[4] = {'N','W','E','S'};
    int dirx[4] = {0, -1, 1, 0};
    int diry[4] = {1, 0, 0, -1};

    for(int i=0; i<n; i++){
        cin >> dir >> times;

        for(int j=0; j<4; j++){
            if(directions[j] != dir) continue;
            
            sx += (dirx[j] * times);
            sy += (diry[j] * times);
        }

    }

    cout << sx << ' ' << sy;


    return 0;
}