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

    int n, m, tmp;
    cin >> n >> m;
    vector<int> fir;
    vector<int> sec;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        n > m ? sec.push_back(tmp) : fir.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        n > m ? fir.push_back(tmp) : sec.push_back(tmp);
    }
    sort(fir.begin(), fir.end());
    sort(sec.begin(), sec.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int loc = lower_bound(sec.begin(), sec.end(), fir[i]) - sec.begin();
        if(loc == sec.size() || sec[loc] != fir[i])
            continue;
        else {
            cnt++;
        }
    }

    cout << fir.size() + sec.size() - 2 * cnt;

    return 0;
}
