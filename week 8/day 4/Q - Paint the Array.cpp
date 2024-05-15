
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int > a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

       int c = 0, d = 0;
        for (int i = 0; i < n; i += 2) {
           int  temp = a[i];
            while (c != 0) {
              int temp1 = c;
                c = temp % c;
                temp = temp1;
            }
           c = temp;
        }
        for (int i = 1; i < n; i += 2) {
           int temp = a[i];
            while (d != 0) {
                int temp1 = d;
               d = temp %d;
                temp = temp1;
            }
           d= temp;
        }

        bool ans = true, value = true;
        for (int i = 1; i < n; i += 2) {
           ans &= a[i] % c > 0;
        }
        for (int i = 0; i < n; i += 2) {
            value &= a[i] % d> 0;
        }

        if (ans) {
            cout << c << endl;
        } else if (value) {
            cout << d << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
