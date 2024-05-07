#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 100005;
int cnt[MAXN], c[MAXN];

void solve() {
    int n;
    cin >> n;

    // Reading input and counting occurrences
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (x > n) continue;
        cnt[x]++;
    }

    int ans = 0;

    // Calculating the answer
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            c[j] += cnt[i];
        }
        ans = max(ans, c[i]);
        cnt[i] = c[i] = 0;
    }

    // Outputting the answer
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
