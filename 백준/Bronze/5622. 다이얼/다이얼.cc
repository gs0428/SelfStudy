#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string dial[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    string s;
    cin >> s;

    int time = 0;

    for(int i = 0;i<s.length();i++) {
        for(int k = 0;k<8;k++) {
            if(dial[k].find(s[i]) != string::npos) {
                time += k + 3;
                break;
            }
        }
    }

    cout << time;

    return 0;
}
