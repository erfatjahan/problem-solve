#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll x = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            x ^= a[i];
        }
        if (x == 0 || n % 2 == 1)
            cout << x <<endl;
        else
            cout << -1 <<endl;
    }
}
