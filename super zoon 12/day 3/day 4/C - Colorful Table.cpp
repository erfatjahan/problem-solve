#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int a[100005];
    int min_row[105], max_row[105], min_col[105], max_col[105];

    for (int i = 1; i <= k; i++) {
        min_row[i] = min_col[i] = INT_MAX;
        max_row[i] = max_col[i] = INT_MIN;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        min_row[a[i]] = min(min_row[a[i]], i);
        max_row[a[i]] = max(max_row[a[i]], i);
    }

    for (int color = 1; color <= k; color++) {
        for (int i = 0; i < n; i++) {
            if (a[i] >= color) {
                min_col[color] = min(min_col[color], i);
                max_col[color] = max(max_col[color], i);
            }
        }
    }

    for (int color = 1; color <= k; color++) {
        if (min_row[color] == INT_MAX) {
            cout << "0 ";
        } else {
            int height = max_row[color] - min_row[color] + 1;
            int width = max_col[color] - min_col[color] + 1;
            cout << 2 * (height + width) << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
