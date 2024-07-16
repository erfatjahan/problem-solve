#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) cin >> i;

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] > n) {
                ok = false;
                break;
            } else {
                if (a[a[i] - 1] >= i + 1 && (a[i] == n || a[a[i]] < i + 1)) continue;
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
