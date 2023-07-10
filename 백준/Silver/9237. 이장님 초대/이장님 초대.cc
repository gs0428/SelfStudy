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
    cin >> n;
    vector<int> v, tree;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++) {
        tree.push_back(v[i] + i + 1);
    }
    sort(tree.rbegin(), tree.rend());

    cout << tree[0] + 1;


    return 0;
}
