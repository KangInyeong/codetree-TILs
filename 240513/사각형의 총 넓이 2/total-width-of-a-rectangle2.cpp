#include <iostream>

#define MAX_N 10
#define OFFSET 100

using namespace std;

int n;
int x1[MAX_N], y1[MAX_N];
int x2[MAX_N], y2[MAX_N];

int checked[201][201];

int main() {

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }
    
    for(int i = 0; i < n; i++)
        for(int x = x1[i]; x < x2[i]; x++)
            for(int y = y1[i]; y < y2[i]; y++)
                checked[x][y] = 1;
    
    int area = 0;
    for(int x = 0; x <= 200; x++)
        for(int y = 0; y <= 200; y++)
            if(checked[x][y])
                area++;
    
    cout << area;
    
    return 0;
}