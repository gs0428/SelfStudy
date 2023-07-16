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
    cin >> s;
    if(s == "0") {
        cout << 1;
        return 0;
    }
    if(s.length() == 1)
        s = "0" + s;
    string ans = s;
    int cnt = 0;
    while(1) {
        int a = s[0] - '0';
        int b = s[1] - '0';
        int sum = a + b;
        string new_a = to_string(b);
        string new_b = to_string(sum % 10);
        s = new_a + new_b;
        cnt++;
        if (s.compare(ans) == 0) {
            break;
        }
    }
    cout << cnt;

    return 0;
}