#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str;
    cin >> str;
    int strlen = str.length();
    int flag = 0;
    int idx = -1;
    for(int i=0; i<strlen; i++){
        if(str[i] != '1'){
            flag = 1;
            idx = i;
            str[i] = '1';
            break;
        } 
    }
    
    int sum = 0;
    if(flag == 0){
        //마지막0 
        str[strlen-1] = '0';
        for(int i=0; i<strlen; i++){
            sum += (pow(2, strlen-i-1) * (int)(str[i]-'0'));
        }
    }else{
        for(int i=0; i<strlen; i++){
            sum += (pow(2, strlen-i-1) * (int)(str[i]-'0'));
        }
    }
    cout << sum;

    return 0;
}