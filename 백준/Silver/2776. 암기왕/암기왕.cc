#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        set<int> s;
        int memo1, memo2;
        int tmp;
        cin >> memo1;
        for (int k = 0; k < memo1; k++) {
            cin >> tmp;
            s.insert(tmp);
        }
        cin >> memo2;
        for (int k = 0; k < memo2; k++) {
            cin >> tmp;
            if(s.find(tmp) != s.end()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }

    return 0;
}