#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, loc;
string temp, s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> T;
    cin.ignore();   // getline에 버퍼가 들어가는 것을 방지하기 위해 사용
    for (int i = 0; i < T; i++)
    {
        getline(cin, s);
        while(true) {
            if(s.find(" ") != std::string::npos) {
                loc = s.find(" ");
                temp = s.substr(0, loc);
                reverse(temp.begin(), temp.end());
                std::cout << temp << " ";
                s.erase(0, loc + 1);
            }
            else
            {
                reverse(s.begin(), s.end());
                std::cout << s << "\n";
                break;
            }
        }
    }

    return 0;
}