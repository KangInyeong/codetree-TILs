#include <iostream>
#include <vector>
using namespace std;

int n, m;
int arr[21];
vector<int>v;
int answer = -1;

void choose(int num, int pre_idx){
    if(num == m+1){
        int tmp = 0;
        for(int i=0; i<v.size(); i++){
            tmp ^= v[i];
        }
        if(tmp > answer) answer = tmp;
        return;
    }

    for(int i=0; i<n; i++){
        if(pre_idx >= i) continue;
        v.push_back(arr[i]);
        choose(num+1, i);
        v.pop_back();
    }
}
int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    choose(1, -1);
    cout << answer;

    return 0;
}