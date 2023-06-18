#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string A, B;
    cin >> A >> B;
    int lenA = A.length();
    int lenB = B.length();
    if(lenB > lenA) {
        swap(A, B);
        swap(lenA, lenB);
    }

    string temp;
    if(lenA != lenB) {
        for(int i = 0;i<lenA-lenB;i++) {
            temp += "0";
        }
    }
    B = temp + B;

    string ans = "";
    int carry = 0;
    int x, y, digit;
    for(int i = lenA-1;i>=0;i--) {
        x = A[i] - '0';
        y = B[i] - '0';
        digit = x + y;
        if(carry == 1) {
            digit++;
            carry = 0;
        }
        if(digit > 9)
            carry = 1;
        ans += digit % 10 + '0';
    }
    if(carry == 1)
        ans += "1";

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
