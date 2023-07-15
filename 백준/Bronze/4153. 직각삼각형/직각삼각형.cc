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

    while(1) {
        vector<int> num(3, 0);

        for (int i = 0; i < 3; i++)
            cin >> num[i];

        if(num[0] == 0 && num[1] == 0 && num[2] == 0)
            break;
        else {
            sort(num.begin(), num.end());
            if(pow(num[2], 2) == (pow(num[0],2) + pow(num[1], 2)))
                cout << "right" << "\n";
            else
                cout << "wrong" << "\n";
        }
    }

    return 0;
}
