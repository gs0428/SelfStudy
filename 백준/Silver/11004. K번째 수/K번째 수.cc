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

    long long int N, K, tmp;
    cin >> N >> K;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    cout << v[K - 1];

    return 0;
}