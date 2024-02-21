#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if(s1.length() > s2.length()){
        if(s1.length()>s3.length()){
            if(s3.length() > s3.length()){
                cout << s1.length() - s3.length();
            }else{
                cout << s1.length() - s2.length();
            }
        }else{
            cout << s3.length() - s2.length();
        }
    }else{
        if(s1.length()>s3.length()){
            cout << s2.length() - s3.length();
        }else{
            if(s2.length() > s3.length()){
                cout << s2.length() - s1.length();
            }else{
                cout << s3.length() - s1.length();
            }
        }
    }

    return 0;
}