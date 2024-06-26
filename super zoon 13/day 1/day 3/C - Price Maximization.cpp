#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long  ans = 0;
        vector<long long > a(n);
        for (int i = 0; i < n;i++) {
            cin >> a[i];
            ans += a[i] / k;
            a[i] %= k;
        }
        sort(a.begin(), a.end());
        long long  i = 0, j = n - 1;
        while (i < j) {
            if (a[i] + a[j] >= k) {
                ans++;
                i++;
                j--;
            } else {
                i++;
            }
        }
        cout << ans <<endl;
    }
}
