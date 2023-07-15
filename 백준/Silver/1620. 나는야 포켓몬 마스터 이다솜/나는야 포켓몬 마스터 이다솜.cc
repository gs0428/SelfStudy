#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<string, int>> str;
    vector<string> num;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        str.push_back(make_pair(s, i + 1));
        num.push_back(s);
    }
    sort(str.begin(), str.end());
    vector<string> str_sort;
    for (int i = 0; i < n; i++) {
        str_sort.push_back(str[i].first);
    }
    for (int i = 0; i < m; i++) {
        cin >> s;
        if(s[0] >= '0' && s[0] <= '9') {
            int loc = stoi(s);
            cout << num[loc - 1] << "\n";
        } else {
            int loc = lower_bound(str_sort.begin(),str_sort.end(), s) - str_sort.begin();
            cout << str[loc].second << "\n";
        }
    }



    return 0;
}
