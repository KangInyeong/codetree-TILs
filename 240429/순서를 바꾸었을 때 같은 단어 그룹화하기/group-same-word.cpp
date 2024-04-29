#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int n;
unordered_map<string, int> word_map;

int main() {

    cin >> n;

    for(int i = 0; i < n; i++){
        string input_str;
        cin >> input_str;
        sort(input_str.begin(), input_str.end());
        word_map[input_str]++;
    }

    int max_val = 0;
    for(unordered_map<string, int>::iterator iter = word_map.begin();
            iter != word_map.end(); iter++) 
        max_val = max(max_val, iter->second);

    cout << max_val;
    return 0;
}