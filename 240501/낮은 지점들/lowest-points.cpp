#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    unordered_map<int, int> um;
    vector<int>v;
    int x, y;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(um.find(x) == um.end()){
            um[x] = y;
            v.push_back(x);
        }else{
            int now = um[x];
            if(y < now) um[x] = y;
        }
    }

    int answer = 0;
    for(int i=0; i<v.size(); i++){
        answer += um[v[i]];
        //cout << v[i] << "의 y값: " << um[v[i]] << endl;
    }

    cout << answer;
    
    return 0;
}