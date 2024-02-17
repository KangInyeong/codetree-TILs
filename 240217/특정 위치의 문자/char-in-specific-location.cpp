#include <iostream>
using namespace std;

int main() {
    
    char words[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
    char a;
    cin >> a;
    int flag = -1;
    for(int i=0; i<6; i++){
        if(a == words[i]){
            flag = i;
            break;
        }
    }

    if(flag == -1){
        cout << "None";
    }else{
        cout << flag;
    }
    
    return 0;
}