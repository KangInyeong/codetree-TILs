#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> numbers;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(numbers.find(a) == numbers.end())
            numbers[a] = 1;
        else
            numbers[a]++;
    }
    for(int j=0; j<m; j++){
        int a;
        cin >> a;

        if(numbers.find(a) == numbers.end())
            cout << 0 << " ";
        else
            cout << numbers[a] << " ";
    }
    return 0;
}