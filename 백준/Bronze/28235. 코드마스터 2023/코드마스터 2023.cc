#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    if(s.compare("SONGDO") == 0) {
        cout << "HIGHSCHOOL";
    } else if(s.compare("CODE") == 0) {
        cout << "MASTER";
    } else if(s.compare("2023") == 0) {
        cout << "0611";
    } else {
        cout << "CONTEST";
    }

    return 0;
}