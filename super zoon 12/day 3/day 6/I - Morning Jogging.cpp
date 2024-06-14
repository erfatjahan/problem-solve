#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 100;
const int MAX_M = 100;
long long  arr[MAX_N][MAX_M];
long long  ar[MAX_N][MAX_M];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < m;j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n;i++) {
            sort(arr[i],arr[i] + m);
        }
        for (int j = 0; j < m;j++) {
            for (int i = 0; i < n;i++) {
                ar[i][j] =arr[i][j];
            }
        }
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < m;j++) {
                cout <<ar[i][j] << " ";
            }
            cout << endl;
        }
    }
}
