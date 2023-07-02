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

    string s;
    cin >> s;
    if (s.find('0') == string::npos || s.find('1') == string::npos) {
        cout << 0;
    } else {
        int cnt_0 = 0, cnt_1 = 0;
        while(1) {
            if (s.find('0') == string::npos || s.find('1') == string::npos) {
                if(s.find('0') == string::npos)
                    cnt_1++;
                else
                    cnt_0++;

                break;
            } else {
                int loc_0 = s.find('0');
                int loc_1 = s.find('1');
                if (loc_0 > loc_1) {
                    s.erase(s.begin(), s.begin() + loc_0);
                    cnt_1++;
                } else {
                    s.erase(s.begin(), s.begin() + loc_1);
                    cnt_0++;
                }
            }
        }

        if(cnt_1 > cnt_0)
            cout << cnt_0;
        else
            cout << cnt_1;

    }


    return 0;
}