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

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        unsigned long long int num;
        cin >> num;
        if(num == 1 || num == 2 || num == 3) {
            cout << 1 << "\n";
        } else if (num == 4 || num == 5) {
            cout << 2 << "\n";
        } else {
            vector<unsigned long long int> v(3, 1);
            v.push_back(2);
            v.push_back(2);
            for (int k = 0; k < num - 5; k++) {
                v.push_back(v[4 + k] + v[k]);
            }
            cout << v.back() << "\n";
        }
    }

    return 0;
}