#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin >> n >>t;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    while (t--) {
        int k;
        cin >> k;
        int l = 0, r = n - 1, mid, ans = -1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (k>= a[mid]) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout<<ans + 1 <<endl;
    }
}
