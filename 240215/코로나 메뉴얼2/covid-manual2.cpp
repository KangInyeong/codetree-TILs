#include <iostream>
using namespace std;

int main() {
    
    int arr[4] = {0, };
    int cnt = 0;
    for(int i=0; i<3; i++){
        char con;
        int deg;
        cin >> con >> deg;

        if(con == 'Y' && deg >= 37){
            arr[0]++;
            cnt++;
        }else if(con == 'N' && deg >= 37){
            arr[1]++;
        }else if(con == 'Y' && deg <37){
            arr[2]++;
        }else if(con == 'N' && deg < 37){
            arr[3]++;
        }

    }

    for(int i=0; i<4; i++){
        cout << arr[i] << ' ';
    }

    if(cnt>=2) cout << "E";

    return 0;
}