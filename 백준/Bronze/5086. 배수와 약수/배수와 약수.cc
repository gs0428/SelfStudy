#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int l, r;
        cin >> l >> r;
        if(l == 0 && r == 0)
            break;

        if(r % l == 0)
            cout << "factor" << "\n";
        else if (l % r == 0)
            cout << "multiple" << "\n";
        else if (r % l != 0 && l % r != 0) {
            cout << "neither" << "\n";
        }
    }

    return 0;
}
