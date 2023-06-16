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

    int realA = 0;
    int N;
    cin >> N;
    for(int i = 0;i<N;i++) {
        int l, r;
        cin >> l >> r;
        for(int k = l;k<l+10;k++) {
            for(int j = r;j<r+10;j++) {
                if(area[k][j])
                    continue;
                realA++;
                area[k][j] = true;
            }
        }
    }

    cout << realA;

    return 0;
}
