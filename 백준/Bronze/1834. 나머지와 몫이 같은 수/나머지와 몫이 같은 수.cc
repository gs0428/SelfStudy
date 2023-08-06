#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unsigned long long int ans = 0;
    for (unsigned long long int i = 1; i < n; i++) {
        ans += (n + 1) * i;
    }

    cout << ans;

    return 0;
}