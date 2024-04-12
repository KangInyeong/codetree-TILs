#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int>num;
int result = 0;

bool isBeautiful(){
    
    for(int i = 0; i < n; i += num[i]) {
        
		if(i + num[i] - 1 >= n)
            return false;
            
        for(int j = i; j < i + num[i]; j++)
            if(num[j] != num[i])
                return false;
	}
	return true;


}

void make(int now){

    if(now == n){
        
        if(isBeautiful()) result++;

        return;
    }


    for(int i=1; i<=4; i++){
        num.push_back(i);
        make(now+1);
        num.pop_back();
    }

    cout << result;
}

int main() {
    
    cin >> n;

    make(0);

    return 0;
}