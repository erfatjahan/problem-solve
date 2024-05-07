
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a.begin() + 1, a.end());
        long long ans = 0;
        for (int i = 1; i <= n; i += k) {
            if (a[i] < 0) {
                ans -= a[i];
            }
        }
        for (int i = n; i > 0; i -= k) {
            if (a[i] > 0) {
                ans += a[i];
            }
        }
        cout <<ans*2-max(abs(a[1]), abs(a[n])) <<endl;
    }
}
