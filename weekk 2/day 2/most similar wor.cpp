#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n;i++) {
            cin >> s[i];
        }
        int result= INT_MAX;
        for (int i = 0; i < n;i++) {
            for (int j = i + 1; j < n;j++) {
                int value= 0;
                for (int k = 0; k < m;k++) {
                    value += abs(s[i][k] - s[j][k]);
                }
                result= min(result, value);
            }
        }
        cout <<result<<endl;
    }
}

