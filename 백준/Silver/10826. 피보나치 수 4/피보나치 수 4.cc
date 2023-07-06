#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

string Fibo(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i < len1 - len2; i++) {
        s2 = "0" + s2;
    }
    int carry = 0;
    string ans = "";
    for (int i = len1 - 1; i >= 0; i--) {
        int a = s1[i] - '0';
        int b = s2[i] - '0';
        int sum = a + b + carry;
        carry = sum / 10;
        ans += to_string(sum % 10);
    }
    if(carry == 1)
        ans += "1";
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
        return 0;
    } else if (N == 1) {
        cout << 1;
        return 0;
    } else {
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        for (int i = 2; i <= N; i++) {
            v.push_back(Fibo(v[i-1], v[i-2]));
        }
        cout << v.back();
    }


    return 0;
}
