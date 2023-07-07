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
    sort(v.begin(), v.end());
    int find;
    cin >> find;
    for (int i = 0; i < find; i++) {
        cin >> tmp;
        cout << binary_search(v.begin(),v.end(), tmp) << "\n";
    }


    return 0;
}
