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

    int people, area, temp;

    cin >> people >> area;
    int total = people * area;

    for (int i = 0; i < 5; i++) {
        cin >> temp;
        cout << temp - total << " ";

    }

    return 0;
}