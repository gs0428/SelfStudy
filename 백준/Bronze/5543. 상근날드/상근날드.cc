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

    int h_min = 2000, b_min = 2000;
    for (int i = 0; i < 3; i++) {
        int hamburger;
        cin >> hamburger;
        if(hamburger < h_min)
            h_min = hamburger;
    }
    for (int i = 0; i < 2; i++) {
        int beverage;
        cin >> beverage;
        if(beverage < b_min)
            b_min = beverage;
    }

    cout << h_min + b_min - 50;

    return 0;
}
