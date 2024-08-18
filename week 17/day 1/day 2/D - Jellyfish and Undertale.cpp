#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b,c;
        cin >> a >> b >>c;
        vector<long long> arr(c);
        for(int i = 0; i < c; i++) {
            cin >> arr[i];
        }
        long long ans = b;
        for (int i = 0; i <c; i++) {
            ans += min(arr[i], a - 1);
        }
        cout << ans << endl;
    }
}
