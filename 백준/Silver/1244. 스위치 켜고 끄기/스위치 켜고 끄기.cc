#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

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
    int stuNum;
    cin >> stuNum;
    for (int i = 0; i < stuNum; i++) {
        int s, num;
        cin >> s >> num;
        if(s == 1) {
            int repeat = n / num;
            for (int k = 1; k <= repeat; k++) {
                if(v[k * num - 1] == 1) {
                    v[k * num - 1] = 0;
                } else
                    v[k * num - 1] = 1;
            }
        } else {
            num -= 1;
            int move = 1;
            while(1) {
                if(num - move < 0 || num + move >= n || v[num - move] != v[num + move])
                    break;
                else
                    move++;
            }
            if(move == 1) {
                if(v[num] == 1)
                    v[num] = 0;
                else
                    v[num] = 1;
            } else {
                move -= 1;
                int start = num - move;
                int end = num + move;
                for (int k = start; k <= end; k++) {
                    if(v[k] == 1)
                        v[k] = 0;
                    else
                        v[k] = 1;
                }
            }
        }
    }
    int x = 1;
    for (int i = 0; i < n; i++) {
        if(i == 20 * x) {
            cout << "\n";
            x++;
        }
        cout << v[i] << " ";
    }

    return 0;
}