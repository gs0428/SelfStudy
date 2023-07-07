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

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num, tmp;
        vector<int> v;
        cin >> num;
        for (int k = 0; k < num; k++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),v.end());
        int gap = 0;
        for (int k = 0; k < num - 1; k++) {
            if(gap < v[k + 1] - v[k])
                gap = v[k + 1] - v[k];
        }
        cout << "Class " << i + 1 << "\nMax " << v.back() << ", Min " << v.front() << ", Largest gap " << gap << "\n";
    }

    return 0;
}
