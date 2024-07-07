#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t, q, x, i, y, k, m, j = 0, n;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<long long>ans(n + 1, 0);
        for (i = 1; i <= n; ++i) {
            int a;
            cin >> a;
            ans[i] =ans[i - 1] + a;
        }
        vector<long long>value(n + 1, 0);
        for (i = 1; i <= n; ++i) {
            value[i] = -100000 * i;
            for (j = i; j <= n; ++j) {
                value[i] = max(value[i],ans[j] -ans[j - i]);
            }
        }
        for (k = 0; k <= n; ++k) {
            long long c= 0;
            for (i = 1; i <= n; ++i) {
                c = max(c,value[i] + min(i, k) * 1LL * x);
            }
            cout << c << ' ';
        }
        cout <<endl;
    }
}
