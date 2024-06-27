#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> aa(n), kk(n), ii(n);
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            kk[i] = k;
            int a_ = 0;
            for (int h = 0; h < k; h++) {
                int a;
                cin >> a;
                a_ = max(a_, a + 1 - h);
            }
            aa[i] = a_;
        }

        for (int h = 0; h < n; h++)
            ii[h] = h;

        sort(ii.begin(), ii.end(), [&aa](int i, int j) { return aa[i] < aa[j]; });

        int ans = 0, k = 0;
        for (int h = 0; h < n; h++) {
            ans = max(ans, aa[ii[h]] - k);
            k += kk[ii[h]];
        }
        cout << ans <<endl';
    }
}
