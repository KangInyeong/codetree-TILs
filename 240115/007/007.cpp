#include <iostream>
#include <string>
using namespace std;

class Mail {
    public:
        string code, place, time;

        Mail(string code, string place, string time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main() {
    
    string c, p, t;
    cin >> c >> p >> t;
    Mail mail = Mail(c,p,t);
    cout << "secret code : " << mail.code << endl;
    cout << "meeting point : " << mail.place << endl;
    cout << "time : " << mail.time << endl;
    return 0;
}