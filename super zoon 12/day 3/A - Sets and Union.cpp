
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long S[50] = {0};
        for (int j = 0; j < n; ++j) {
            int k;
            cin >> k;
            for (int l = 0; l < k; ++l) {
                int s;
                cin >> s;
                s--;
                S[j] |= (long long)1 << s;
            }
        }

        long long arr = 0;
        for (int j = 0; j < n;j++) {
            arr |= S[j];
        }

        int ans = 0;
        for (int j = 0; j < 50;j++) {
            if ((arr>> j & 1) == 1) {
                long long B = 0;
                for (int k = 0; k < n; ++k) {
                    if ((S[k] >> j & 1) == 0) {
                        B |= S[k];
                    }
                }
                ans = max(ans, __builtin_popcountll(B));
            }
        }

        cout << ans << endl;
    }
}
