
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if all districts belong to the same gang
        bool allSame = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        // Find the first district that has a different gang than the first one
        int firstDiff = -1;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                firstDiff = i;
                break;
            }
        }

        // Connect all districts of the same gang as a[0] to the first different gang district
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[0]) {
                cout << 1 << " " << i + 1 << "\n";
            }
        }

        // Connect the first different gang district to all other different gang districts
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                cout << firstDiff + 1 << " " << i + 1 << "\n";
            }
        }
    }

    return 0;
}
