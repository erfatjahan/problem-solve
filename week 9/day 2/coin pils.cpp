#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

