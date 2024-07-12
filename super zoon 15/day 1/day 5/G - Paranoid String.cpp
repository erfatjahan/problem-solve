
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long paranoid_count = n;

        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i-1]) {
                // Each "01" or "10" pattern introduces (n - i) paranoid substrings
                paranoid_count += i;
            }
        }

        cout << paranoid_count << endl;
    }

    return 0;
}
