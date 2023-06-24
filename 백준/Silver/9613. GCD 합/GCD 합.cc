#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int GCD(int a, int b) {
    int r = a % b;
    if(r == 0)
        return b;

    return GCD(b, r);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long sum = 0;
        vector<int> v(n, 0);

        for (int k = 0; k < n; k++)
            cin >> v[k];

        for (int k = 0; k < n - 1; k++) {
            for (int j = k + 1; j < n; j++) {
                sum += GCD(v[k], v[j]);
            }
        }
        cout << sum << "\n";
    }


    return 0;
}
