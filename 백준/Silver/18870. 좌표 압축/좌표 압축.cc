#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<int> v(N, 0);
    vector<int> temp;
    for(int i = 0;i<N;i++) {
        cin >> v[i];
        temp.push_back(v[i]);
    }
    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    for(int i = 0;i<N;i++) {
        cout << lower_bound(temp.begin(), temp.end(), v[i]) - temp.begin() << " ";
    }

    return 0;
}
