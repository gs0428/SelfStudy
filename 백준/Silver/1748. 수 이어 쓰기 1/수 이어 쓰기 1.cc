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

    int n;
    cin >> n;
    int cnt = 0;
    int mul = 1;
    while(1) {
        if(n - 9 * pow(10, mul - 1) > 0) {
            cnt += 9 * pow(10, mul - 1) * mul;
            n -= 9 * pow(10, mul - 1);
            mul++;
        } else {
            cnt += n * mul;
            break;
        }
    }

    cout << cnt;

    return 0;
}
