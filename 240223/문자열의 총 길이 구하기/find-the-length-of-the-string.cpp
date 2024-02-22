#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str[10];
    for(int i=0; i<10; i++){
        cin >> str[i];
    }

    int sum = 0;
    for(int i=0; i<10; i++){
        sum += str[i].length();
    }

    cout << sum;

    return 0;
}