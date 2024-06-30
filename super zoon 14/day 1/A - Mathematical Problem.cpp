#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        long long n, m;
        cin >> n >> s;
        m = 1e9;
        for (int j = 0; j < n - 1;j++) {
            long long o[n-1];
            long long  p = 0;
            for (int i = 0; i < n; i++) {
                int q = (s[i] - '0');
                if (i ==j + 1) continue;
                if (i ==j) {
                    q = 10 *q + (s[i + 1] - '0');
                    i++;
                }
                o[p++] =q;
            }
            long long sum = 0;
            for (int i = 0; i <p; i++) {
                if (o[i] == 0) m = 0;
                if (o[i] > 1) sum +=o[i];
            }
            if (sum == 0) sum = 1;
            m = min(m, sum);
        }
        cout << m <<endl;
    }
}
