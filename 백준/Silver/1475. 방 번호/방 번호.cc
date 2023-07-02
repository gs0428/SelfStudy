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

    vector<int> v(10, 0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - '0']++;
    }
    int sum = v[6] + v[9];
    v[6] = sum % 2 == 0 ? sum / 2 : sum / 2 + 1;
    v[9] = sum % 2 == 0 ? sum / 2 : sum / 2 + 1;
    sort(v.begin(), v.end());
    cout << v.back();



    return 0;
}
