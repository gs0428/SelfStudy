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
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int big = 0;
    for (int i = 0; i < n; i++) {
        if(v[v.size() - (i + 1)] * (i + 1) > big)
            big = v[v.size() - (i + 1)] * (i + 1);
    }
    cout << big;

    return 0;
}
