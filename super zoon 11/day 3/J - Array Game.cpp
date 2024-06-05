#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

ll get_lcm(ll a, ll b) {
    return a * b / __gcd(a, b);
}

void TEST_CASES() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll maxi = a.back();

    ll l = a[0];
    for (int i = 1; i < n; i++) {
        l = get_lcm(l, a[i]);
        if (l > maxi) {
            break;
        }
    }
    if (l > maxi) {
        cout << n << "\n";
        return;
    }
    assert(l == maxi);

    vector<int> d;
    for (int i = 1; i * i <= l; i++) {
        if (l % i == 0) {
            d.push_back(i);
            if (i != l / i) {
                d.push_back(l / i);
            }
        }
    }

    int ans = 0;
    for (int it : d) {
        if (binary_search(a.begin(), a.end(), it))
            continue;
        int cur = 0;
        int cur_lcm = 0;
        for (int i = 0; i < n; i++) {
            if (it % a[i] == 0) {
                cur++;
                if (cur_lcm == 0)
                    cur_lcm = a[i];
                cur_lcm = get_lcm(cur_lcm, a[i]);
            }
        }
        if (cur_lcm == it) {
            ans = max(ans, cur);
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        TEST_CASES();
    }
}
