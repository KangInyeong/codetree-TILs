#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int k, m;
    cin >> m >> k;
    int arr[101] = {0, };

    int flag = -1;
    for(int i=0; i<m; i++){
        int student ;
        cin >> student;
        arr[student]++;
        if(arr[student] >= k) {
            flag = student;
            break;
        }
    }

    cout << flag;

    return 0;
}