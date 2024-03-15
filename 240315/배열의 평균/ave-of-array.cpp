#include <iostream>
using namespace std;

int main() {
    
    int arr[2][4] = {0, };
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    float totalsum = 0;
    for(int i=0; i<2; i++){
        float sum = 0;
        for(int j=0; j<4; j++) {
            sum += arr[i][j];
        }
        totalsum += sum;
        cout << (float)(sum/4) << ' ';
    }cout << endl;

    for(int i=0; i<4; i++){
        float sum = 0;
        for(int j=0; j<2; j++){
            sum += arr[j][i];
        }
        totalsum += sum;
        cout << (float)(sum/2) << ' ';
    } cout << endl;

    cout << (float)(totalsum/16);

    return 0;
}