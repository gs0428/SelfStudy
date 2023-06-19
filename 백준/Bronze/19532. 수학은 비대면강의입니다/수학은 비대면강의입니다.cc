#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x[2], y[2], z[2], ans[2];
    for(int i = 0;i<2;i++)
        cin >> x[i] >> y[i] >> z[i];

    if(x[1] == 0 || (x[0] != 0 && x[0] > x[1])) {
        swap(x[0], x[1]);
        swap(y[0], y[1]);
        swap(z[0], z[1]);
    }

    int x1 = x[0], x2 = x[1];

    x[0] *= x2;
    y[0] *= x2;
    z[0] *= x2;

    x[1] *= x1 == 0 ? 1 : x1;
    y[1] *= x1 == 0 ? 1 : x1;
    z[1] *= x1 == 0 ? 1 : x1;


    ans[1] = (z[0] - z[1]) / (y[0] - y[1]);
    if(x[0] == 0) {
        ans[1] = z[0] / y[0];
        ans[0] = (z[1] - (y[1] * ans[1])) / x[1];
    }
    else if(y[0] == 0) {
        ans[0] = z[0] / x[0];
        ans[1] = (z[1] - (x[1] * ans[0])) / y[1];
    }
    else if(y[1] == 0) {
        ans[0] = z[1] / x[1];
        ans[1] = (z[0] - (x[0] * ans[0])) / y[0];
    }
    else {
        ans[1] = (z[0] - z[1]) / (y[0] - y[1]);
        ans[0] = (z[0] - (y[0] * ans[1])) / x[0];
    }

    cout << ans[0] << " " << ans[1];

    return 0;
}

