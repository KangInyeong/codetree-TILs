#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[101];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<q; i++){
        int cmd;
        cin >> cmd;
        if(cmd == 1){
            int a;
            cin >> a;
            cout << arr[a-1] << endl;
        }else if(cmd == 2){
            int a;
            int flag = -1;
            cin >> a;
            for(int j=0; j<n; j++){
                if(arr[j]==a){
                    flag = j;
                    break;
                }
            }
            if(flag >= 0){
                cout << flag+1 << endl;
            }else{
                cout << 0 << endl;
            }
        }else if(cmd == 3){
            int a, b;
            cin >> a >> b;
            for(int j=a; j<=b; j++){
                cout << arr[j-1] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}