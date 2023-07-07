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

    int n, tmp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end());

    int repeat;
    cin >>repeat;
    for (int i = 0; i < repeat; i++) {
        cin >> tmp;
        if (!binary_search(v.begin(), v.end(), tmp)) {
            cout << 0 << " ";
            continue;
        } else {
            int cnt = 0;
            int start = lower_bound(v.begin(), v.end(), tmp) - v.begin();
            int end = upper_bound(v.begin(), v.end(), tmp) - v.begin();
            for (int k = start; k < end; k++) {
                cnt++;
            }
            cout << cnt << " ";
        }
    }

    return 0;
}
