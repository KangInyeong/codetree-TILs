#include <iostream>
#include <vector>
using namespace std;

int n, m;
int arr[21];
vector<int>v;
int answer = -1;

void choose(int num){
    if(num == m+1){
        int tmp = v[0];
        for(int i=1; i<v.size(); i++){
            tmp = tmp ^ i;
        }
        if(tmp > answer) answer = tmp;
        return;
    }

    for(int i=0; i<n; i++){
        v.push_back(i);
        choose(num+1);
        v.pop_back();
    }
}
int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    choose(1);
    cout << answer;

    return 0;
}