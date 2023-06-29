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

    for (int i = 0; i < 3; i++) {
        int i_h, i_m, i_s, o_h, o_m, o_s;
        cin >> i_h >> i_m >> i_s >> o_h >> o_m >> o_s;
        if (o_s < i_s) {
            o_m -= 1;
            o_s += 60;
        }
        if (o_m < i_m) {
            o_h -= 1;
            o_m += 60;
        }
        cout << o_h - i_h << " " << o_m - i_m << " " << o_s - i_s << "\n";
    }

    return 0;
}
