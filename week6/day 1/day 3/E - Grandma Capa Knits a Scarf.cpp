#include<bits/stdc++.h>
using namespace std;
//const int INF = 100005;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans =100005 ;
        for (int k = 0; k < 26; k++) {
            bool value = true;
            int cnt = 0;
            int i = 0, j = n - 1;
            while (i < j) {
                if (s[i] == s[j]) {
                    i++;
                    j--;
                } else if (s[i] - 'a' == k) {
                    i++;
                    cnt++;
                } else if (s[j] - 'a' == k) {
                    j--;
                    cnt++;
                } else {
                    value = false;
                    break;
                }
            }
            if (value)
                ans = min(ans, cnt);
        }
        if (ans == 100005)
            cout << -1 <<endl;
        else
            cout << ans << endl;
    }
}
