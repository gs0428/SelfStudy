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

    vector<int> v(21, 0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.compare("all") == 0) {
            for (int k = 1; k <= 20; k++) {
                v[k] = 1;
            }
            continue;
        } else if (s.compare("empty") == 0) {
            for (int k = 1; k <= 20; k++) {
                v[k] = 0;
            }
            continue;
        }
        int num;
        cin >> num;
        if (s.compare("add") == 0) {
            v[num] = 1;
        } else if (s.compare("remove") == 0) {
            v[num] = 0;
        } else if (s.compare("check") == 0) {
            if(v[num] == 1)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        } else if (s.compare("toggle") == 0) {
            if(v[num] == 1)
                v[num] = 0;
            else
                v[num] = 1;
        }
    }

    return 0;
}