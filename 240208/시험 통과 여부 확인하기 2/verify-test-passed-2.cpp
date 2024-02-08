#include <iostream>
using namespace std;

int main() {
   
   int n;
   cin >> n;
   int cnt = 0;
    for(int i=0; i<n; i++){
        int totalsum = 0;
        int score;
        for(int j=0; j<4; j++){
            cin >> score;
            totalsum += score;
        }

        if(totalsum/4 >= 60){
            cout << "pass" << endl;
            cnt++;
        }else{
            cout << "fail" << endl;
        }
    }

    cout << cnt;

    return 0;
}