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
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    int ans = v[0];
    while(true) {
        auto a = max_element(v.begin() + 1, v.end());
        int max = *a;
        if(v[0] > max)
            break;
        for (int i = 1; i < v.size(); i++) {
            if(v[i] == max) {
                v[i]--;
                v[0]++;
                break;
            }
        }
    }

    cout << v[0] - ans;

    return 0;
}
