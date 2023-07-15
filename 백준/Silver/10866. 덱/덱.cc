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

    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s;
        if (s.compare("push_back") == 0) {
            cin >> num;
            d.push_back(num);
        } else if (s.compare("push_front") == 0) {
            cin >> num;
            d.push_front(num);
        } else if (s.compare("front") == 0) {
            if(d.empty())
                cout << -1 << "\n";
            else
                cout << d.front() << "\n";
        } else if (s.compare("back") == 0) {
            if(d.empty())
                cout << -1 << "\n";
            else
                cout << d.back() << "\n";
        } else if (s.compare("size") == 0) {
            cout << d.size() << "\n";
        } else if (s.compare("empty") == 0) {
            cout << d.empty() << "\n";
        } else if(s.compare("pop_front") == 0) {
            if(d.empty())
                cout << -1 << "\n";
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        } else if(s.compare("pop_back") == 0) {
            if(d.empty())
                cout << -1 << "\n";
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
    }

    return 0;
}
