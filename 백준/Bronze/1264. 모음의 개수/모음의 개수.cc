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

    while(true) {
        string s;
        int cnt = 0;
        getline(cin, s);
        if(s.compare("#") == 0)
            break;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0;i<s.length();i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }


    return 0;
}
