#include <iostream>
#include <string>
using namespace std;

class Member {
    public:
        string name;
        int level;

        Member(string name = "codetree", int level = 10) {
            this->name = name;
            this->level = level;
        }
};

int main() {
    Member member1 = Member();
    Member member2 = Member();
    cin >> member2.name >> member2.level;

    cout << "user "  << member1.name << " lv " << member1.level << endl;
    cout << "user " << member2.name << " lv " << member2.level;
    return 0;
}