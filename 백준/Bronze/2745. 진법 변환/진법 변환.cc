#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<bool>> area(101, vector<bool>(101, false));

    string N;
    int B, total = 0;
    cin >> N >> B;

    vector<char> v(B);
    for(int i = 0;i<B;i++) {
        if(i >= 10) {
            v[i] = 'A' + i - 10;
        } else {
            v[i] = '0' + i;
        }
    }
    for(int i = N.length()-1;i>=0;i--) {
        for(int k = 0;k<B;k++) {
            if(N[i] == v[k]) {
                total += k * pow(B, N.length()-1-i);
            }
        }
    }

    cout << total;



    return 0;
}
