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

    int n, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}