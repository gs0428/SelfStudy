#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int B, N;
    cin >> N >> B;

    vector<char> v(B);
    for(int i = 0;i<B;i++) {
        if(i >= 10) {
            v[i] = 'A' + i - 10;
        } else {
            v[i] = '0' + i;
        }
    }
	vector<char> ans;
   while(N != 0) {
		ans.push_back(v[N%B]);
		N /= B;
	}

	reverse(ans.begin(), ans.end());

    for(int i = 0;i<ans.size();i++) {
        cout << ans[i];
    }
    



    return 0;
}
