#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1;
    cin >> s1;
    string s2 = s1;
    reverse(s2.begin(), s2.end());

    if(s1.compare(s2) == 0)
        cout << 1;
    else
        cout << 0;


    return 0;
}
