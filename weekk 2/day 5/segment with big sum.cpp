
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    int l = 0, r = 0;
    int ans = INT_MAX; // Initialize ans to find the shortest segment

    while (r < n) {
        sum += a[r];
        while (sum >= s) { // Modify the condition to check for sum >= s
            ans = min(ans, r - l + 1); // Update ans when sum >= s
            sum -= a[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX) { // If no segment is found
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}
