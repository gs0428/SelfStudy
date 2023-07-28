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
    vector<int> v(26, 0);
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << v[i] << " ";
    }

    return 0;
}