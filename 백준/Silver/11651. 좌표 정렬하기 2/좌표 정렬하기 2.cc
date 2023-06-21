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
    vector<pair<int, int>> v;
    for(int i = 0;i<N;i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, tmp2));
        swap(v[i].first, v[i].second);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<N;i++)
        cout << v[i].second << " " << v[i].first << "\n";



    return 0;
}
