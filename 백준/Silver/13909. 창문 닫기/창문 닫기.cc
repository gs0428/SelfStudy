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

    int n;
    cin >> n;
    int cnt = 0;
    int ans = 1;
    while(pow(ans, 2) <= n) {
        if(pow(ans, 2) <= n)
            cnt++;
        ans++;
    }

    cout << cnt;

    return 0;
}