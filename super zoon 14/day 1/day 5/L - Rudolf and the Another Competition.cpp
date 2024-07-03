
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        pair<int, int> a[n];
        for (int i = 0; i < n; ++i) {
            int b[m];
            for (int j = 0; j < m; ++j) cin >> b[j];
            sort(b, b + m);
            int cur = 0;
            for (int j = 0; j < m; ++j) {
                cur += b[j];
                if (cur <= h) {
                    a[i].first++;
                    a[i].second += cur;
                } else {
                    break; // No need to continue if current sum exceeds h
                }
            }
        }
        for (int i = 0; i < n; ++i) a[i].second = -a[i].second;
        int res = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] > a[0]) ++res;
        }
        cout << res << '\n';
    }
    return 0;
}
