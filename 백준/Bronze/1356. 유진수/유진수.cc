#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin  >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        int ll = 1, rr = 1;
        for (int k = 0; k <= i; k++) {
            ll *= s[k] - '0';
        }
        for (int k = i + 1; k < s.length(); k++) {
            rr *= s[k] - '0';
        }
        if(ll == rr) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}