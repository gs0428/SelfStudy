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

    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if(tmp == 0)
            cout << "1 0" << "\n";
        else if(tmp ==1)
            cout << "0 1" << "\n";
        else {
            int total = 0, fir = 0, sec = 1;
            for (int i = 2; i <= tmp; i++) {
                total = sec + fir;
                fir = sec;
                sec = total;
            }

            cout << fir << " " << sec << "\n";
        }
    }

    return 0;
}
