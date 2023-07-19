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

    int a, b, n;
    cin >> a >> b >> n;
    if(a % b == 0)
        cout << 0;
    else {
        int res = a % b;
        for (int i = 0; i < n - 1; i++) {
            res *= 10;
            res %= b;
        }
        res *= 10;
        res /= b;

        cout << res;
    }

    return 0;
}