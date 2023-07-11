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

    int n, m;
    cin >> n >> m;
    string adr, pas;
    vector<pair<string, string>> v;
    vector<string> ans;
    for (int i = 0; i < n; i++) {
        cin >> adr >> pas;
        v.push_back(make_pair(adr, pas));
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++) {
        ans.push_back(v[i].first);
    }
    for (int i = 0; i < m; i++) {
        cin >> adr;
        int loc = lower_bound(ans.begin(),ans.end(), adr) - ans.begin();
        cout << v[loc].second << "\n";
    }


    return 0;
}
