#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    while(a.find(b) != string::npos){
        for(int i=0; i<a.length(); i++){
            if(a[i] == b[0]){
                int flag = -1;
                for(int j=0; j<b.length(); j++){
                    if(a[i+j] != b[j]){
                        flag = j;
                        break;
                    }
                }   
                if(flag == -1){
                    a.erase(i, b.length());
                }
            }
        }
    }

    cout << a;
    
    return 0;
}