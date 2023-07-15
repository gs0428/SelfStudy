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
    int top = 1, bot1 = 1, bot2 = 1;
    for (int i = 2; i <= n; i++) {
        top *= i;
    }
    for (int i = 2; i <= m; i++) {
        bot1 *= i;
    }
    for (int i = 2; i <= n-m; i++) {
        bot2 *= i;
    }

    cout << top / (bot1 * bot2);

    return 0;
}
