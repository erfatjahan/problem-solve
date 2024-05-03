#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int l = 0, r = 1000000000;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            if (b[i] == 0) {
                if (a[i] > l) {
                    l = a[i];
                }
            } else {
                if (a[i] - b[i] > l) {
                    l = a[i] - b[i];
                }
                if (a[i] - b[i] < r) {
                    r = a[i] - b[i];
                }
            }
        }
        if (l <= r) {
        cout << "YES"<<endl;
        } else {
        cout << "NO"<<endl;
        }
    }
}
