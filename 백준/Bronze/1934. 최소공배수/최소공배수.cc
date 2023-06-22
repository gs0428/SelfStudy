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

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int l, r;
        cin >> l >> r;
        if(l == 1) {
            cout << r << "\n";
            continue;
        }

        int mul = l * r;
        int com = 1;
        int numL = 2, numR = 2;
        vector<int> vL(l+1, 0), vR(r+1, 0);

        while(l != 1) {
            if(l % numL == 0) {
                vL[numL]++;
                l /= numL;
            }
            else
                numL++;
        }
        while(r != 1) {
            if(r % numR == 0) {
                vR[numR]++;
                r /= numR;
            }
            else
                numR++;
        }
        int area = vL.size() > vR.size() ? vR.size() : vL.size();
        for(int k = 2;k<area;k++) {
            if(vL[k] == 0 || vR[k] == 0)
                continue;

            com *= vL[k] > vR[k] ? (int)pow(k, vR[k]) : (int)pow(k, vL[k]);
        }
        cout << mul / com << "\n";
    }


    return 0;
}
