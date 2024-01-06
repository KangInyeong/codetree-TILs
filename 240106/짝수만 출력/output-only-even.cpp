#include <iostream>
using namespace std; 
int main() {
    int a, b;
    cin >> a>> b;

    while(a<b+1){
        if(a%2==0) cout << a << ' ';
        a+=1;
    }
    return 0;
}