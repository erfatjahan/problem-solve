#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  n;
        cin >> n;
        if (n % 2 && n > 2) {
            cout << -1 <<endl;
        } else {
            vector<long long >arr(n);
            arr[0] = n;
            for (int i = 1; i < n; i++) {
                if (i % 2 == 1) {
                    arr[i] = (i / 2) + 1;
                } else {
                   arr[i] = n - (i / 2);
                }
            }
            for (int i = 0; i < n; i++) {
                cout <<arr[i] << (i == n - 1 ? '\n' : ' ');
            }
        }
    }
}
