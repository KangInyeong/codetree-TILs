#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;

    // 모양에 맞게 윗쪽 별을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++)
			cout << "  ";
		for(int j = 0; j < (2 * n) - (2 * i) - 1; j++)
			cout << "* ";
		cout << "\n";
    }
	
	// 모양에 맞게 아랫쪽 별을 출력합니다.
	for(int i = n-2; i >= 0; i--) {
		for(int j = 0; j < i; j++)
			cout << "  ";
		for(int j = 0; j < (2 * n) - (2 * i) - 1; j++)
			cout << "* ";
		cout << "\n";
    }
	
    return 0;
}