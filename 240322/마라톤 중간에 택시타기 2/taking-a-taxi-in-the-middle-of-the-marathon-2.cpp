#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct location{
    int y;
    int x;
};
int main() {
   
    int n;
    cin >> n;
    vector<location> v;
    for(int i=0; i<n; i++){
        int y, x;
        cin >> y >> x;
        v.push_back({y,x});
    }
    int minval = INT_MAX;
    for(int i=1; i<n-1; i++){
        int distance = 0;
        for(int j=1; j<n; j++){
            if(i==j) continue;
            location before_loc;
            if(j-1==i){
                before_loc = v[j-2];
                //cout << j << "와" << j-2 << "의 거리 :" << abs(v[j].y - before_loc.y) + abs(v[j].x - before_loc.x) << endl;
            }else{
                before_loc = v[j-1];
                //cout << j << "와" << j-1 << "의 거리 :" << abs(v[j].y - before_loc.y) + abs(v[j].x - before_loc.x) << endl;
            }
            distance += abs(v[j].y - before_loc.y) + abs(v[j].x - before_loc.x);
        }
        minval = min(minval, distance);
    }
    
    cout << minval;

    return 0;
}