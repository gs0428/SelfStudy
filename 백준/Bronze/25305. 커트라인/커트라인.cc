#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, k;
    cin >> N >> k;

    vector<int> v(N, 0);
    for(int i = 0;i<N;i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    cout << v[N-k];

    return 0;
}
