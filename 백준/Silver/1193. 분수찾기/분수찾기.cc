#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int X;
int i = 0;
int l, r;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> X;
    while(true) {
        ++i;
        if(X>i) {
            X -= i;
        } else {
            if(i % 2 == 0) {
                for (int k = 0; k < X;k++) {
                    r = i - k;
                    l = 1 + k;
                }
            } else {
                for (int k = 0; k < X;k++) {
                    l = i - k;
                    r = 1 + k;
                }
            }
            break;
        }
    }

    std::cout << l << "/" << r;

    return 0;
}