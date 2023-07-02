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

    int sum = 64, cnt = 0, ans = 0, X;
    cin >> X;
    if(X == 64) {
        cout << 1;
        return 0;
    }
    while(1) {
        sum /= 2;
        ans += sum;

        if(ans > X) {
            ans -= sum;
            continue;
        }

        cnt++;
        if(ans == X)
            break;
    }

    cout << cnt;

    return 0;
}
