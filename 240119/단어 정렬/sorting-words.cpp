#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;

int main() {
   
   int n;
   string arr[101];
   cin >> n;
   for(int i=0; i<n; i++){
    cin >> arr[i];
   }

   sort(arr, arr+n);
   for(int i=0; i<n; i++){
    cout << arr[i] << endl;
   }
    return 0;
}