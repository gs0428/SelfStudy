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

    unsigned long long int sum, n, tmp, ans = 0;
    cin >> n;
    sum = (n - 1) * n / 2;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        ans += tmp;
    }

    cout << ans - sum;

    return 0;
}