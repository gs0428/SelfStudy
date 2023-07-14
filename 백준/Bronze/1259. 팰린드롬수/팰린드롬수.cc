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

    while(1) {
        int n;
        cin >> n;
        if(n == 0)
            break;
        else {
            string s = to_string(n);
            int loc = s.length() / 2;
            string tmp = s.substr(0, loc);
            reverse(tmp.begin(), tmp.end());
            int er = s.length() % 2 == 0 ? loc : loc + 1;
            s.erase(s.begin(), s.begin() + er);
            if(tmp.compare(s) == 0)
                cout << "yes" << "\n";
            else
                cout << "no" << "\n";
        }
    }

    return 0;
}
