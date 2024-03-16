#include <iostream>
using namespace std;

int main() {
   
    int arr[101][101] = {};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int a;
            cin >> a;
            arr[i][j] *= a;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << ' '; 
        }cout << endl;
    }
    
    return 0;
}