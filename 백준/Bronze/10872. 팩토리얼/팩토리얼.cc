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

    int num;
    cin >> num;
    int ans = 1;
    if (num == 0) {
        cout << 1;
    } else {
        for (int i = 1; i <= num; i++) {
            ans *= i;
        }
        cout << ans;
    }

    return 0;
}
