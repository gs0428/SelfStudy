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

    int m, d;
    cin >> m >> d;
    if(m > 2)
        cout << "After";
    else if(m < 2)
        cout << "Before";
    else{
        if(d > 18)
            cout << "After";
        else if(d < 18)
            cout << "Before";
        else
            cout << "Special";
    }

    return 0;
}
