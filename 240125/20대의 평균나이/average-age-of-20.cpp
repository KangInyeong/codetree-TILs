#include <iostream>
using namespace std;

int main() {
    int sumval = 0;
    int cnt = 0;
    int age;
    while(1){
        cin >> age;
        if(age < 30 && age >= 20) {
            sumval += age;
            cnt++;
        }else{
            break;
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << (double)sumval/cnt;
    return 0;
}