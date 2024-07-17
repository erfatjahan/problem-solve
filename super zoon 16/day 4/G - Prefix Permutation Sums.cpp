#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        ll a[n + 1];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }
        a[0] = 0;

        set<ll> s;
        int cnt = 0;
        ll val = -1;
        for (int i = 1; i <= n; i++) s.insert(i);
        for (int i = 1; i < n; i++) {
            ll u = abs(a[i] - a[i - 1]);
            if (u <= n) {
                if (!s.count(u)) {
                    cnt++;
                    val = u;
                }
                s.erase(u);
            } else {
                cnt++;
                val = u;
            }
        }
        if (cnt > 1) {
            cout << "NO\n";
            continue;
        }
        if (val == -1 || *s.begin() + *s.rbegin() == val) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
