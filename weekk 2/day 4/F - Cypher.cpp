#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int d=0;
            while (x--) {
                char c;
                cin >> c;
                if (c == 'U') {
                   d += 1;
                } else {
                    d-= 1;
                }
            }
           d%= 10;
            d += 10;
            d%= 10;
            a[i] -= d;
            a[i] %= 10;
            a[i] += 10;
            a[i] %= 10;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout <<endl;
    }
}
