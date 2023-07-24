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
    queue<int> q;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.compare("push") == 0) {
            int num;
            cin >> num;
            q.push(num);
        } else if(s.compare("pop") == 0) {
            if(q.empty())
                cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if(s.compare("front") == 0) {
            if(q.empty())
                cout << -1 << "\n";
            else
                cout << q.front() << "\n";
        } else if(s.compare("back") == 0) {
            if(q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        } else if(s.compare("empty") == 0) {
            if(q.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        } else if(s.compare("size") == 0) {
            cout << q.size() << "\n";
        }
    }

    return 0;
}