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

    int sum = 0;
    for(int i = 0;i<5;i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }

    cout << sum;


    return 0;
}
