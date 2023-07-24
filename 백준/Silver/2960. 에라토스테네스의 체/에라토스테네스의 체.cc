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

    int n, m;
    cin >> n >> m;
    vector<bool> v(1001, false);
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if(v[i])
            continue;

        v[i] = true;
        cnt += 1;
        if(cnt == m) {
            cout << i;
            return 0;
        }
        for (int k = 2 * i; k <= n; k += i) {
            if(v[k])
                continue;

            v[k] = true;
            cnt += 1;
            if(cnt == m) {
                cout << k;
                return 0;
            }
        }
    }



    return 0;
}