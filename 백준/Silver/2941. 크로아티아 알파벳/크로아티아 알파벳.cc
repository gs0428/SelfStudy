#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int size = s.length();
    vector<pair<string, int>> v= {{"dz=", 3},{"c-", 2},
                                  {"d-", 2},{"lj",2},
                                  {"nj", 2},{"c=", 2},
                                  {"s=",2},{"z=", 2}};
    for (int i = 0; i < s.length(); i++) {
        int cnt = 0;
        for (int k = 0; k < 8; k++) {
            if (s.find(v[k].first) != string::npos) {
                int loc = s.find(v[k].first);
                for(int j = loc;j<loc+v[k].second;j++)
                    s[j] = ' ';
                size -= v[k].second - 1;
                break;
            }
            cnt++;
        }
        if(cnt == s.length())
            break;
    }

    cout << size;

    return 0;
}
