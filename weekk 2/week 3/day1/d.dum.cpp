#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>>abc(n,vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> abc[i][j];
            }
        }
        int Summ= 0;
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < m;j++) {
                int sum =abc[i][j];
                for (int k = 1; i - k >= 0 && j - k >= 0;k++) {
                    sum +=abc[i - k][j - k];
                }
                for (int k = 1; i - k >= 0 && j + k < m;k++) {
                    sum += abc[i - k][j + k];
                }
                for (int k = 1; i + k < n && j - k >= 0;k++) {
                    sum += abc[i + k][j - k];
                }
                for (int k = 1; i + k < n && j + k < m;k++) {
                    sum += abc[i + k][j + k];
                }
                 Summ = max( Summ, sum);
            }
        }
        cout << Summ << endl;
    }
}
