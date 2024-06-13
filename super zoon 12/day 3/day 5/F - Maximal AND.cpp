#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
int a[MAXN], cnt[31];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < 31; i++) {
            cnt[i] = 0;
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 31; j++) {
                bool bit = (a[i] >> j & 1);
                if (bit) cnt[j]++;
            }
        }
        for (int i = 30; i >= 0; i--) {
            int value= n - cnt[i];
            if (k >=value) {
                k -=value;
                int x = (1 << i);
                for (int j = 1; j <= n; j++) {
                    a[j] |= x;
                }
            }
        }
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++) {
            ans &= a[i];
        }
        cout << ans <<endl;
    }
}
