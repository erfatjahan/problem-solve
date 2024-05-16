#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        long long a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        long long S[n + 1];
        S[0] = 0;
        for (int j = 0; j < n; j++) {
            S[j + 1] = S[j] + a[j];
        }
        long long ans = 0;
        for (int j = 1; j < n; j++) {
            long long x = S[j];
            long long y = S[n];
            while (y != 0) {
                long long value= y;
                y = x % y;
                x = value;
            }
            ans = max(ans, x);
        }
        cout << ans << endl;
    }
}
