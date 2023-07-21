#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

unsigned long long int Facto(int total, int num) {
    if(num == total || num == 0)
        return 1;
    else {
        unsigned long long int top = 1, bot = 1;
        num = total - num > num ? num : total - num;
        for (int i = 0; i < num; i++) {
            top *= total - i;
            bot *= num - i;
            if(top % bot == 0) {
                top /= bot;
                bot = 1;
            }
        }

        return top / bot;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> A;
    vector<int> B;
    if(n == 1) {
        cout << 0 << " " << 1;
        return 0;
    } else {
        A.push_back(1);
        A.push_back(0);
        B.push_back(0);
        B.push_back(1);
        for (int i = 2; i <= n; i++) {
            A.push_back(A[i - 1] + A[i - 2]);
            B.push_back(B[i - 1] + B[i - 2]);
        }

        cout << A.back() << " " << B.back();
    }





    return 0;
}