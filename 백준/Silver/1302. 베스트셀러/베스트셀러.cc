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

    int n;
    cin >> n;
    vector<string> v;
    vector<string> ans;
    string tmp;
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    vector<string> copy(v);
    copy.erase(unique(copy.begin(), copy.end()), copy.end());
    for (int i = 0; i < copy.size(); i++) {
        int cnt = 0;
        int start = lower_bound(v.begin(), v.end(), copy[i]) - v.begin();
        int end = upper_bound(v.begin(), v.end(), copy[i]) - v.begin();
        for (int k = start; k <= end; k++) {
            cnt++;
        }
        if(cnt > max) {
            max = cnt;
            ans.clear();
            ans.push_back(copy[i]);
        } else if(cnt == max) {
            ans.push_back(copy[i]);
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans[0];


    return 0;
}
