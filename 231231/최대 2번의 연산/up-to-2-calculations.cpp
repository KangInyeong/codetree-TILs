#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin >> a;
    
    int flag = 0;
    if(a%2 ==0){
        a /= 2;
        flag = 1;
    }
    
    if(a%2!=0){
       flag = 2; 
    }
    
    if(flag == 1){
        cout << a/2;
    }else if(flag == 2){
        cout << (a + 1) / 2;
    }
    return 0;
}