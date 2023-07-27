#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    if(s.compare("NLCS") == 0) {
        cout << "North London Collegiate School";
    } else if(s.compare("BHA") == 0) {
        cout << "Branksome Hall Asia";
    } else if(s.compare("KIS") == 0) {
        cout << "Korea International School";
    } else {
        cout << "St. Johnsbury Academy";
    }

    return 0;
}