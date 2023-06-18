#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int n;
	cin >> n;
	int minX = 10000, minY = 10000, maxX = -10000, maxY = -10000;
	if(n == 1) {
		cout << 0;
		return 0;
	}
	else {
		for(int i = 0;i < n;i++) {
			int tmpX, tmpY;
			cin >> tmpX >> tmpY;

			if(tmpX > maxX)  	
				maxX = tmpX;
			if(tmpX < minX)
				minX = tmpX;

			if(tmpY > maxY)  	
				maxY = tmpY;
			if(tmpY < minY)
				minY = tmpY;
		}
	}

	cout << (maxX - minX) * (maxY - minY);
    

    return 0;
}
