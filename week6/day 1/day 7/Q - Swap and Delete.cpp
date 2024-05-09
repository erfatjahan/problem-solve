
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        string s;
        cin >> s;

        int n = s.size();
        int cnt[2] = {0}; // Initializing count array with zeroes
        for (char c : s) {
            cnt[c - '0'] += 1; // Incrementing count based on the character
        }

        int need[2] = {0}; // Initializing need array with zeroes
        int ans = n;
        for (int i = 0; i < n; i++) {
            need[s[i] - '0' ^ 1] += 1; // Calculating the need array
            if (cnt[0] >= need[0] && cnt[1] >= need[1]) {
                ans = n - 1 - i; // Updating the answer
            }
        }
        cout << ans << '\n'; // Printing the answer
    }
    return 0;
}
