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

    vector<bool> v(246913, false);
    for (int i = 2; i <= sqrt(246912); i++) {
        if(v[i])
            continue;

        for (int k = i * 2; k <= 246912; k += i) {
            v[k] = true;
        }
    }
    int n;
    while(1) {
        cin >> n;
        if(n == 0)
            break;
        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if(!v[i])
                cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}