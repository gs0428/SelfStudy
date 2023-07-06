#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string A = "AAAA";
    string B = "BB";
    string s, ans = "";
    cin >> s;
    while(1) {
        if(s.find('.') == string::npos) {
            if(s.length() % 2 != 0) {
                cout << -1;
                return 0;
            } else {
                int repeat = s.length() / 4;
                int rest = (s.length() % 4) / 2;
                for (int i = 0; i < repeat; i++) {
                    ans += A;
                }
                for (int i = 0; i < rest; i++) {
                    ans += B;
                }
                break;
            }
        } else {
            int loc = s.find('.');
            string temp = s.substr(0, loc);
            if(temp.length() % 2 != 0) {
                cout << -1;
                return 0;
            } else {
                int repeat = temp.length() / 4;
                int rest = (temp.length() % 4) / 2;
                for (int i = 0; i < repeat; i++) {
                    ans += A;
                }
                for (int i = 0; i < rest; i++) {
                    ans += B;
                }
                ans += '.';
                s.erase(s.begin(), s.begin() + loc + 1);
            }
        }
    }

    cout << ans;

    return 0;
}
