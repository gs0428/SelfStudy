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

    int temp, sum = 0;
    vector<int> v;
    for (int i = 0; i < 8; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> v2(v);
    sort(v2.begin(), v2.end());

    for (int i = 3; i < 8; i++) {
        sum += v2[i];
    }
    cout << sum << "\n";
    vector<int> ans;
    for (int i = 3; i < 8; i++) {
        ans.push_back(find(v.begin(), v.end(), v2[i]) - v.begin());
    }
    sort(ans.begin(),ans.end());
    for(auto &i : ans)
        cout << i+1 << " ";


    return 0;
}