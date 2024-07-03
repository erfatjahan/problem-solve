
#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> cnt;
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            ans += cnt[x - i];
            cnt[x - i]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
