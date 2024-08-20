#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);

        // Using a traditional for loop to read elements
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = 0;
        for (int l = 1; l < n; l <<= 1) {
            for (int i = 0; i < n; i += (l << 1)) {
                if (i + l < n && v[i] > v[i + l]) {
                    ans++;
                    for (int j = 0; j < l; ++j) {
                        swap(v[i + j], v[i + l + j]);
                    }
                }
            }
        }

        if (is_sorted(v.begin(), v.end())) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
