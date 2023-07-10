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
    vector<int> v(10001, 0);
    vector<int> sum(10001, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sum[i] += sum[i - 1] + v[i];
    }
    int s = 0, e = 1, cnt = 0;
    while(true) {
        if(e > n)
            break;
        else {
            int sub = sum[e] - sum[s];
            if(sub > m) {
                s++;
            } else if (sub == m) {
                e++;
                cnt++;
            } else {
                e++;
            }
        }
    }

    cout << cnt;

    return 0;
}
