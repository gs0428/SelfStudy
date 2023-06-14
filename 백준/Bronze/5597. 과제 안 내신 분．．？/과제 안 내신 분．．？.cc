#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v(31,0);
    for(int i = 0;i<28;i++) {
        int temp;
        cin >> temp;
        v[temp]++;
    }
    vector<int> ans;
    for(int i = 1;i<=30;i++) {
        if (v[i] == 0) {
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    std::cout << ans[0] << "\n" << ans[1];

    return 0;
}
