#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll p = 0;
        for (ll j = 29; j >= 0; j--) {
            ll c = 0;
            for (ll i = 0; i < n; i++) {
                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1))) {
                    c++;
                }
            }
            p += c * (c - 1) / 2;
        }
        cout << p << "\n";
    }

    return 0;
}

