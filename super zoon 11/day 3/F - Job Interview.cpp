#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int size = n + m + 1;
        int a[size], b[size];
      long long r1 = 0, r2 = 0;
        long long ch[size];
        for (int i = 0; i < size;i++) {
            cin >> a[i];
        }
        for (int i = 0; i < size;i++) {
            cin >> b[i];
        }
        int c1 = n + 1, c2 = m;
        for (int i = 0; i < size;i++) {
            if ((a[i] > b[i] && c1 > 0) || c2 == 0) {
                c1--;
                r1 += a[i];
            } else {
                c2--;
                r1 += b[i];
            }
        }
        c1 = n;
        c2 = m + 1;
        for (int i = 0; i < size; ++i) {
            if ((a[i] > b[i] && c1 > 0) || c2 == 0) {
                ch[i] = 1;
                c1--;
                r2 += a[i];
            } else {
                ch[i] = 0;
                c2--;
                r2 += b[i];
            }
        }
        for (int i = 0; i < size;i++) {
            long long r;
            if (ch[i]) {
                r = r1 - a[i];
            } else {
                r = r2 - b[i];
            }
            cout << r << " ";
        }
        cout <<endl;
    }
}
