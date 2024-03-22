#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
    string str;
    cin >> str;

    for(int i=0; i<str.length()-1; i++){
        if(str[i]=='(' && str[i+1]=='(') v.push_back(0);
        if(str[i]==')' && str[i+1]==')') v.push_back(1);
    }

    int cnt =0;
    for(int i=0; i<v.size(); i++){
        for(int j=i; j<v.size(); j++){
            if(v[i]==0 && v[j]==1) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}