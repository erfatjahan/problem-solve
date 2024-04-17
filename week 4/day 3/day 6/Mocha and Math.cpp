#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int s = INT_MAX; // Initializing s with maximum value

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            s &= num; // Bitwise AND operation
        }

        cout << s << "\n";
    }
    return 0;
}
