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
    set<string> set;
    for (int i = 0; i < n; i++) {
        string name, state;
        cin >> name >> state;
        if(state.compare("enter") == 0) {
            set.insert(name);
        } else {
            set.erase(name);
        }
    }

    for (auto a = set.rbegin(); a != set.rend(); a++) {
        cout << *a << "\n";
    }


    return 0;
}