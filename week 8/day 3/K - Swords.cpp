
#include<bits/stdc++.h>
using namespace std;
int main() {
    const int N = 2e5 + 3;
    vector<int> a(N);
long long  ans = 0, k = 0, p = 0;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        long long b = a[i] - a[1];
        while (b != 0) {
            long long temp = k;
            k = b;
            b = temp % b;
        }
        p = max(a[i], p);
    }
    for (int i = 1; i <= n; i++) {
        ans += (p - a[i]) / k;
    }
    cout << ans << ' ' << k;
}
