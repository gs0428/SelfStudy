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
    string tmp;
    vector<string> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    vector<string> ans;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        if (binary_search(v.begin(), v.end(), tmp)) {
            ans.push_back(tmp);
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }


    return 0;
}
