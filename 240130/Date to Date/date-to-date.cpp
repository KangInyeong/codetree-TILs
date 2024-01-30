#include <iostream>
using namespace std;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int result = 0;

    if(m1 == m2){
        result += (d2 - d1);
    }else if(m1+1 == m2){
        result += ((num_of_days[m1] - d1) + d2);
    }else{
        for(int i=m1+1; i<m2; i++){
            result += (num_of_days[i]);
        } 
        result += (num_of_days[m1] - d1);
        result += d2;
    }

    cout << result +1;   

    return 0;
}