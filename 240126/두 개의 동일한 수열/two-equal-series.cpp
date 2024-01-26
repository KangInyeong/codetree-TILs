#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    vector<int>a;
    vector<int>b;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), a.end());

    int flag = 0;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout << "No";
    else cout << "Yes";

    return 0;
}