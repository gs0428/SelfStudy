#include <string>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N,M;
    cin >> N >> M;
    int arr1[N][M], arr2[N][M];
    
    for(int i = 0;i < N;i++) {
        for(int k = 0;k < M;k++) {
            cin >> arr1[i][k];
        }
    }
    for(int i = 0;i < N;i++) {
        for(int k = 0;k < M;k++) {
            cin >> arr2[i][k];
        }
    }
    for(int i = 0;i < N;i++) {
        for(int k = 0;k < M;k++) {
            cout << arr1[i][k] + arr2[i][k] << " ";
        }
        cout << "\n";
    }
    
    
     return 0;
}