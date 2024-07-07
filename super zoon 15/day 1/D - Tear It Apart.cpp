#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = n;
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            int mx = 0;
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (s[j] != c) {
                    ++cnt;
                    mx = max(mx, cnt);
                } else {
                    cnt = 0;
                }
            }
            ans = min(ans, mx);
        }
        ans += 1;
        int res = 0;
        while ((1 << res) < ans) {
            ++res;
        }
        cout << res << endl;
    }
}
