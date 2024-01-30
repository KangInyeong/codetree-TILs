#include <iostream>
using namespace std;

int main() {
    
    int a, b, c, d;
    cin >> a >> b >> c >>d;

    int minute = 0;
    if(c > a){
        if(d >= b){
            int h = c - a;
            minute += (h*60 + (d-b));
        }else{
            int h = (c-1 - a);
            int new_d = d + 60;
            minute += (h*60 + (new_d - b));
        }
    }else if(c == a){
        minute += (d-b);
    }

    cout << minute;
    return 0;
}