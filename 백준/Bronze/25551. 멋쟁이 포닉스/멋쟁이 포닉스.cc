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

    vector<long long int> set1;
    vector<long long int> set2;
    long long int black, white;
    for (int i = 0; i < 3; i++) {
        cin >> white >> black;
        i == 1 ? set2.push_back(white) : set1.push_back(white);
        i == 1 ? set1.push_back(black) : set2.push_back(black);
    }
    auto min1 = min_element(set1.begin(),set1.end());
    auto min2 = min_element(set2.begin(),set2.end());
    if(*min1 == *min2) {
        cout << *min1 * 2;
    } else if(*min1 > *min2){
        cout << *min2 * 2 + 1;
    } else if(*min1 < *min2){
        cout << *min1 * 2 + 1;
    }

    return 0;
}
