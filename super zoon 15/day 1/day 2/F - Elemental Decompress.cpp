
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), p(n), q(n), f(n + 1, 0), g(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = i;
        }

        auto comp = [&a](int x, int y) { return a[x] < a[y]; };
        sort(b.begin(), b.end(), comp);

        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (!f[a[b[i]]]) {
                p[b[i]] = a[b[i]];
                f[a[b[i]]] = 1;
            } else if (!g[a[b[i]]]) {
                q[b[i]] = a[b[i]];
                g[a[b[i]]] = 1;
            } else {
                cout << "NO\n";
                possible = false;
                break;
            }
        }

        if (!possible) continue;

        for (int j = n, i = 0; i < n; ++i) {
            if (!p[b[i]]) {
                while (f[j]) j--;
                f[j] = 1;
                p[b[i]] = j;
            }
        }

        for (int j = n, i = 0; i < n; ++i) {
            if (!q[b[i]]) {
                while (g[j]) j--;
                g[j] = 1;
                q[b[i]] = j;
            }
        }

        for (int i = 0; i < n; ++i) {
            if (max(p[i], q[i]) != a[i]) {
                cout << "NO\n";
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
            for (int i = 0; i < n; ++i) cout << p[i] << ' ';
            cout << '\n';
            for (int i = 0; i < n; ++i) cout << q[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
