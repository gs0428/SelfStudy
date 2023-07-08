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

    int n, tmp;
    int sum = 0;
    vector<int> v1;
    vector<int> v2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v1.push_back(tmp);
    }
    sort(v1.rbegin(),v1.rend());
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v2.push_back(tmp);
    }
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++) {
        sum += v1[i] * v2[i];
    }

    cout << sum;

    return 0;
}
