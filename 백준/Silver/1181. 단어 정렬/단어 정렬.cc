#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    vector<string> v[51];
    for(int i = 0;i<N;i++) {
        string temp;
        cin >> temp;
        v[temp.length()].push_back(temp);
    }
    for(int i = 1;i<=50;i++) {
        if(v[i].size() != 0) {
            sort(v[i].begin(), v[i].end());
            for(int k = 0;k<v[i].size();k++) {
                if(k == 0) {
                    cout << v[i][k] << "\n";
                } else {
                    if(v[i][k].compare(v[i][k-1]) == 0)
                        continue;
                    else
                        cout << v[i][k] << "\n";
                }

            }
        }
    }

    return 0;
}
