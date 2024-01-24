#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int i;
    queue<int>q;
    while(1){
        cin >> i;
        if(i == 0)break;
        q.push(i);
    }
    
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}