#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans[6] = {1, 1, 2, 2, 2, 8};

    vector<int> v(6, 0);

    for(int i = 0;i<6;i++) {
        cin >> v[i];
        cout << ans[i] - v[i] << " ";
    }



    return 0;
}
