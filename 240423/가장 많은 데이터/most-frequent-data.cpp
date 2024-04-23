#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

#define MAX_N 100000

using namespace std;

int n;
string words[MAX_N];
unordered_map<string, int> freq;

int ans; 

int main() {
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> words[i];
    
    for(int i = 0; i < n; i++) {
        if(freq.find(words[i]) == freq.end())
            freq[words[i]] = 1;
        else
            freq[words[i]]++;
        
        ans = max(ans, freq[words[i]]);
    }

    cout << ans;
    return 0;
}