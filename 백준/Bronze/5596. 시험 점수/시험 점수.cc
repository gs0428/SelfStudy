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

    int S = 0, T = 0;

    for (int k = 0; k < 4; k++) {
        int tmp;
        cin >> tmp;
        S += tmp;
    }

    for (int k = 0; k < 4; k++) {
        int tmp;
        cin >> tmp;
        T += tmp;
    }

    if(S >= T)
        cout << S;
    else
        cout << T;


    return 0;
}
