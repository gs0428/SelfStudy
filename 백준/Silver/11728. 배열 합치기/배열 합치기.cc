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

    int N, M, tmp;
    cin >> N >> M;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 0; i < M; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}