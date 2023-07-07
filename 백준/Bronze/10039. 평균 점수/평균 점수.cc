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

    int tmp;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        if (tmp < 40) {
            ans += 40;
        } else {
            ans += tmp;
        }
    }

    cout << ans / 5;

    return 0;
}
