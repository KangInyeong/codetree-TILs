#include <iostream>
using namespace std;

int main() {
    
    double sum = 0;
    double score;
    for(int i=0; i<8; i++){
        cin >> score;
        sum += score;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum/8;

    return 0;
}