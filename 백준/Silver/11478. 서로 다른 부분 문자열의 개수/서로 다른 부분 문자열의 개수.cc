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
    vector<string> v;
    for (int i = 1; i <= s.length(); i++) {
        for (int k = 0; k <= s.length() - i; k++) {
            v.push_back(s.substr(k, i));
        }
    }
    sort(v.begin(),v.end());

    v.erase(unique(v.begin(),v.end()), v.end());

    cout << v.size() << "\n";

    return 0;
}
