#include <iostream>
#include <vector>
using namespace std;

vector<int>v;
int n, m;

void choose(int num, int pre){

    if(num == m+1){
        for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        if(i<=pre) continue;
        v.push_back(i);
        choose(num+1, i);
        v.pop_back();
    }

}
int main() {
    
    cin >> n >> m;
    choose(1, 0);

    return 0;
}