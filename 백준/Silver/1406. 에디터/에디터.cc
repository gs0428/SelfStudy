#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    stack<char> st;
    stack<char> restore;
    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }

    int n;
    cin >> n;
    char com;
    char word;
    for (int i = 0; i < n; i++) {
        cin >> com;
        if(com == 'P') {
            cin >> word;
            st.push(word);
        } else if(com == 'L') {
            if(st.empty()) {
                continue;
            } else {
                restore.push(st.top());
                st.pop();
            }
        } else if(com == 'D') {
            if(restore.empty()) {
                continue;
            } else {
                st.push(restore.top());
                restore.pop();
            }
        } else {
            if (st.empty()) {
                continue;
            } else {
                st.pop();
            }
        }
    }

    string res = "";
    int size_r = restore.size();
    for (int i = 0; i < size_r; i++) {
        res += restore.top();
        restore.pop();
    }
    string sts = "";
    int size_s = st.size();
    for (int i = 0; i < size_s; i++) {
        sts += st.top();
        st.pop();
    }
    reverse(sts.begin(), sts.end());
    cout << sts + res;

    return 0;
}