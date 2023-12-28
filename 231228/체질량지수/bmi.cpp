#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    float bmi = b / pow(a,2) *10000;
    //cout << fixed;
    //cout.precision(2);
    cout << trunc(bmi) << endl;
    if(bmi >= 25){
        cout << "Obesity";
    }
    return 0;
}