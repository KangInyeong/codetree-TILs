#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int minval = INT_MAX;
    for(int i=0; i<n; i++){
        int distance = 0;
        int cnt = 0;
        int idx = 0;
        for(int j=i; j<2*n; j++){
            if(cnt==n) break;
            if(j>=n){
                distance += (v[idx++]*cnt);
                //cout << idx << "에서" << v[idx] << "*" <<cnt << "=" << distance << endl; 
            }else{
                distance += (v[j]*cnt);
                //cout << j << "에서" << v[j] << "*" <<cnt << "=" << distance << endl; 
            }
            cnt++;
        }
        minval = min(minval, distance);
    }

    cout << minval;

    return 0;
}