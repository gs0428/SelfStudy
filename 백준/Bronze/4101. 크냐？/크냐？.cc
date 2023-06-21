#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(1) {
        int a, b;
        cin >> a >> b;
        if(a > b)
            cout << "Yes" << "\n";
        else if(a < b || (a != 0 && b != 0 && a == b))
            cout << "No" << "\n";
        else if(a == 0 && b == 0)
            break;


    }

    return 0;
}
