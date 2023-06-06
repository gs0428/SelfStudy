#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v; 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> v;
    string s, temp;
    getline(cin, s);
    while (true)
    {
        if (s[0] == '<')
        {
            // std::cout << "꺽쇠 찾음" << "\n";
            v.push_back(s.substr(0, s.find('>')+1));
            s.erase(0, s.find('>')+1);
        }
        else
        {
            // std::cout << "꺽쇠 못 찾음"
            //           << "\n";
            if (s.find(" ") != std::string::npos && s.find('<') == std::string::npos)
            {
                // 공백만 있는 경우
                temp = s.substr(0, s.find(" "));
                reverse(temp.begin(), temp.end());
                temp.append(" ");
                v.push_back(temp);
                s.erase(0, s.find(" ") + 1);
            } else if(s.find('<') != std::string::npos && s.find(" ") == std::string::npos) {
                // 꺽쇠만 있는 경우
                temp = s.substr(0, s.find('<'));
                reverse(temp.begin(), temp.end());
                v.push_back(temp);
                s.erase(0, s.find('<'));
            }
            else if(s.find(" ") < s.find('<') && (s.find('<') != std::string::npos && s.find(" ") != std::string::npos))
            {
                // 공백, 꺽쇠가 있고 공백이 앞에 있는 경우
                temp = s.substr(0, s.find(" "));
                reverse(temp.begin(), temp.end());
                temp.append(" ");
                v.push_back(temp);
                s.erase(0, s.find(" ")+1);
            }
            else if(s.find('<') < s.find(" ") && (s.find('<') != std::string::npos && s.find(" ") != std::string::npos)) {
                // 공백, 꺽쇠가 있고 꺽쇠가 앞에 있는 경우
                temp = s.substr(0, s.find('<'));
                reverse(temp.begin(), temp.end());
                v.push_back(temp);
                s.erase(0, s.find('<'));
            } else {
                // 공백, 꺽쇠 중 아무것도 없는 경우
                reverse(s.begin(), s.end());
                v.push_back(s);
                s.clear();
            }
        }
        if (s.length() == 0)
            break;
    }

    for (int i = 0; i < v.size();i++) 
        std::cout << v[i];
    

    return 0;
}