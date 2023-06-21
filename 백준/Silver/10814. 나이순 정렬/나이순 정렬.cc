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
    vector<string> v[201];

    for(int i = 0;i<N;i++) {
        int num;
        string name;
        cin >> num >> name;
        v[num].push_back(name);
    }
    for(int i = 1;i<=200;i++) {
        if(v[i].size() != 0) {
            for(int k = 0;k<v[i].size();k++)
                cout << i << " " << v[i][k] << "\n";
        }

    }

    return 0;
}
