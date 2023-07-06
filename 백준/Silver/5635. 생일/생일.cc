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

    int n;
    cin >> n;
    string name, older, younger;
    int o_day = 31, o_month = 12, o_year = 2010;
    int y_day = 1, y_month = 1, y_year = 1990;
    for (int i = 0; i < n; i++) {
        string n;
        int d, m, y;
        cin >> n >> d >> m >> y;

        if (y < o_year) {
            o_year = y;
            older = n;
            o_year = y;
            o_month = m;
            o_day = d;
        } else if (y == o_year) {
            if (m < o_month) {
                o_month = m;
                older = n;
                o_year = y;
                o_month = m;
                o_day = d;
            } else if (m == o_month) {
                if (d < o_day) {
                    o_day = d;
                    older = n;
                    o_year = y;
                    o_month = m;
                    o_day = d;
                }
            }
        }

        if (y > y_year) {
            y_year = y;
            younger = n;
            y_year = y;
            y_month = m;
            y_day = d;
        } else if (y == y_year) {
            if (m > y_month) {
                y_month = m;
                younger = n;
                y_year = y;
                y_month = m;
                y_day = d;
            } else if (m == y_month) {
                if (d > y_day) {
                    y_day = d;
                    younger = n;
                    y_year = y;
                    y_month = m;
                    y_day = d;
                }
            }
        }
    }

    cout << younger << "\n" << older;

    return 0;
}
