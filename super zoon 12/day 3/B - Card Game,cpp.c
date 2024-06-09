
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

int main() {

    int t;
  cin >> t;

    while (t--) {
        int n;
      cin >> n;

        int a[50];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        i64 ans = 0;
        for (int i = 2; i < n; i++) {
            ans += max(0, a[i]);
        }
        ans +=max(0, a[0] + max(0, n > 1 ? a[1] : 0));
        cout << ans <<endl;
    }

}
