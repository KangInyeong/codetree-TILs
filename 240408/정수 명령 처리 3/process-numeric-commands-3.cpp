#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    deque<int>dq;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str == "push_front"){
            int a;
            cin >> a;
            //cout << a << endl;
            dq.push_front(a);
        }
        else if(str == "push_back"){
            int a;
            cin >> a;
            //cout << a << endl;
            dq.push_back(a);
        }
        else if(str == "pop_front"){
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if(str == "pop_back"){
            cout << dq.back() << endl;
            dq.pop_back();
        }
        else if(str == "size"){
            cout << dq.size() << endl;
        }
        else if(str == "empty"){
            cout << dq.empty() << endl;
        }
        else if(str == "front"){
            cout << dq.front() << endl;
        }
        else if(str == "back"){
            cout << dq.back() << endl;
        }
    }

    return 0;
}