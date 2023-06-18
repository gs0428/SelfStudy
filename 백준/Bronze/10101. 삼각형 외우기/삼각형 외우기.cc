#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int angle[3];
	int total = 0;
	for(int i = 0;i < 3;i++) {
		cin >> angle[i];
		total += angle[i];
	}

	if(total != 180) 
		cout << "Error";
	else if(angle[0] == 60 && angle[1] == 60 && angle[2] == 60)
		cout << "Equilateral";
	else if(angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2])
		cout << "Isosceles";
	else 
		cout << "Scalene";
    

    return 0;
}
