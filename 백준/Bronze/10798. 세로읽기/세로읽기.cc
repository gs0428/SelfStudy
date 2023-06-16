#include <string>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s[5];
    int max = 0;
    
    for(int i = 0;i<5;i++) {
            cin >> s[i];
        
        
        if(s[i].length() > max)
            max = s[i].length();
    }
    
    for(int i = 0;i<max;i++) {
        for(int k = 0;k < 5;k++) {
            if(i > s[k].length() - 1)
                continue;
            cout << s[k][i];
        }
    }
    
    return 0;
}