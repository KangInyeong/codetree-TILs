#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_N 100000

int n, k;
int arr[MAX_N];
unordered_map<int, int> freq;
vector<pair<int, int> > v;

int main() {
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for(unordered_map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
        v.push_back({it->second, it->first});
    }

    sort(v.begin(), v.end());

    for(int i = (int)v.size() - 1; i >= (int)v.size() - k; i--)
        cout << v[i].second << " ";

    return 0;
}