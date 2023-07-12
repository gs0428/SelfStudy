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

    string s;
    cin >> s;
    if(s == "0") {
        cout << 0;
        return 0;
    }
    string ans = "", tmp = "";
    int fir = s[0] - '0';
    while(fir != 0) {
        tmp += (fir % 2) + '0';
        fir /= 2;
    }
    reverse(tmp.begin(), tmp.end());
    ans += tmp;
    for (int i = 1; i < s.length(); i++) {
        tmp = "";
        int num = s[i] - '0';
        while(num != 0) {
            tmp += (num % 2) + '0';
            num /= 2;
        }
        if (tmp.length() < 3) {
            int len = tmp.length();
            for (int k = 0; k < 3 - len; k++) {
                tmp += '0';
            }
        }
        reverse(tmp.begin(), tmp.end());
        ans += tmp;
    }

    cout << ans;

    return 0;
}
