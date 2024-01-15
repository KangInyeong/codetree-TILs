#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int classcnt = 0;
    int hallcnt = 0;
    int toiletcnt = 0;

    for(int i=0; i<n; i++){
        if(i%2==0 && i!=0) classcnt++;
        if(i%3==0) hallcnt++;
        if(i%12==0) toiletcnt++;
    }
    cout << classcnt-1 << ' ' << hallcnt-1 << ' ' <<toiletcnt-1;
    return 0;
}