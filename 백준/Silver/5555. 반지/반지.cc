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

    string ans, tmp;
    int n;
    int cnt = 0;
    cin >> ans >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        for (int k = 0; k < ans.length(); k++) {
            if(tmp.find(ans) != string::npos) {
                cnt++;
                break;
            } else {
                tmp += tmp[0];
                tmp.erase(0, 1);
            }
        }
    }

    cout << cnt;

    return 0;
}