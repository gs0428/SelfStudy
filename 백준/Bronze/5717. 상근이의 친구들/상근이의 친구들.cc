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
    while(1) {
        cin >> n >> m;
        if (n == 0 && m == 0) {
            break;
        }
        cout << n + m << "\n";
    }

    return 0;
}