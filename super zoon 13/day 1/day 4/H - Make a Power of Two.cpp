
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> powers_of_two;
    for (long long j = 1; j < (1LL << 60); j *= 2) {
        powers_of_two.push_back(to_string(j));
    }

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 20;

        for (const string& t : powers_of_two) {
            int m = t.size();
            int pos = 0;
            for (int k = 0; k < n; k++) {
                if (s[k] == t[pos]) {
                    pos++;
                    if (pos == m) {
                        break;
                    }
                }
            }
            ans = min(ans, (n - pos) + (m - pos));
        }

        cout << ans << endl;
    }
}
