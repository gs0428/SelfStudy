#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(5, 0);
    int total = 0;
    for(int i = 0;i<5;i++) {
        cin >> v[i];
        total += v[i];
    }
    sort(v.begin(), v.end());

    cout << total / 5 << "\n" << v[2];

    return 0;
}
