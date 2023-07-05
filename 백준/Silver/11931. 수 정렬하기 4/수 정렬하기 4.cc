#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int Div2(int num, int cnt) {
    if(num % 2 == 1)
        return -1;
    else
        return cnt + (num / 2);
}

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
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}