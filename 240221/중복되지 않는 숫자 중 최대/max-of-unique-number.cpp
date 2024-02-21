#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[1001];
    int cnt[1001] = {0, };
    int maxnum = -1;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        cnt[arr[i]]++;
        if(arr[i] > maxnum) maxnum = arr[i];
    }

    int first = -1;
    bool firstflag = false;
    for(int i=maxnum; i>=1; i--){
        if(cnt[i]==1 && firstflag == false && first == -1){
            first = i;
            firstflag = true;
            break;
        }
    }

    if(firstflag==false){
        cout << -1;
    }else{
        cout << first;
    }
    return 0;
}