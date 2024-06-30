#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<long long> a(n + 1);
        vector<long long> s(n + 1, 0);
        vector<long long >arr(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            s[i] = s[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++) {
            arr[i] =arr[i - 1];
            int j = upper_bound(s.begin() + 1, s.begin() + n + 1, s[i] - l) - s.begin() - 1;
            if (s[i] - s[j] <= r && s[i] - s[j] >= l) {
                arr[i] = max(arr[i], arr[j] + 1);
            }
        }
        cout <<arr[n] << endl;
    };
}
