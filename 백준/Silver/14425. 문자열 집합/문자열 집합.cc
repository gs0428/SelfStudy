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

    int N, M;
    int cnt = 0;
    cin >> N >> M;
    vector<string> ans;

    for(int i = 0;i<N;i++) {
        string s;
        cin >> s;
        ans.push_back(s);
    }
    sort(ans.begin(), ans.end());

    for(int i = 0;i<M;i++) {
        string s;
        cin >> s;

        if(binary_search(ans.begin(), ans.end(), s))
            cnt++;
    }

    cout << cnt;

    return 0;
}
