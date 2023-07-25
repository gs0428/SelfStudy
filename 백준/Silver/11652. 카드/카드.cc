#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool compare(pair<long long int, long long int>a, pair<long long int, long long int>b) {
    if(a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long int tmp;
    cin >> n;
    priority_queue<long long int> q;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        q.push(tmp);
    }
    vector<pair<long long int, long long int>> ans;
    long long int start = q.top();
    ans.push_back(make_pair(1, start));
    q.pop();
    long long int k = 0;
    while(!q.empty()) {
        if(q.top() == start) {
            ans[k].first++;
        } else {
            start = q.top();
            ans.push_back(make_pair(1, q.top()));
            k++;
        }
        q.pop();
    }

    sort(ans.begin(), ans.end(), compare);

    cout << ans[0].second;

    return 0;
}