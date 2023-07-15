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
    for (int i = 0; i < n; i++) {
        queue<char> q;
        string s;
        cin >> s;
        int loc = 0;
        while(1) {
            if(s[loc] == '(')
                q.push('(');
            else {
                if(q.empty())
                    break;
                else
                    q.pop();
            }
            loc++;
        }

        if(q.empty() && loc == s.length())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
