#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char str[n + 1];
        str[0]=' ';
        for (int i=1;i<=n;i++) {
            str[i]=s[i - 1];
        }
     long long ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                if (str[j] == '1') break;
                if (str[j] == '0') {
                    ans += i;
                    str[j] = '2';
                }
            }
        }
        cout << ans <<endl;
    }
}
