#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    while(1) {
        getline(cin, s);
        if(s.compare("END") == 0)
            break;
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }

    return 0;
}