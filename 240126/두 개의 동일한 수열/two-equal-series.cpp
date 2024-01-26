#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    vector<int>a;
    vector<int>b;
    int num;

    for(int i=0; i<n; i++){
        cin >> num;
        a.push_back(num);
    }
    for(int i=0; i<n; i++){
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int flag = true;
    for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
            flag = false;
            break;
        }
    }            

    if(flag == false) cout << "No";
    else cout << "Yes";

    return 0;
}