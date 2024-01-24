#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int i;
    queue<int>q;
    while(1){
        cin >> i;
        q.push(i);
        if(i == 0)break;
    }
    int s = q.size();
    for(int i=0; i<s; i++){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}