#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int c = 0;
        int i = 0;
        while (i < n) {
            cin >> a[i];
            c ^= a[i];
            i++;
        }
        int e = c;
        i = 0;
        while (i < n) {
            int d = c ^ a[i];
            e = min(e, d);
            i++;
        }
        cout << e << endl;
    }
}
