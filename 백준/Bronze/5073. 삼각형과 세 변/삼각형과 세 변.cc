#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	while(true) {
		int len[3];
		int max = 0, total = 0;
		for(int i = 0;i < 3;i++) {
			cin >> len[i];
			total += len[i];
			if(len[i] > max)
				max = len[i];
		}

		if(total == 0)
			break;
        
		if(max * 2 >= total ) 
			cout << "Invalid" << "\n";
		else if(len[0] == len[1] && len[1] == len[2] && len[0] == len[2])
			cout << "Equilateral" << "\n";
		else if(len[0] == len[1] || len[1] == len[2] || len[0] == len[2])
			cout << "Isosceles" << "\n";
		else 
			cout << "Scalene" << "\n";
	}
    	return 0;
}