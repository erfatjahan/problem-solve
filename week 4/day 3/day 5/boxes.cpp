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
        sort(a.begin(), a.end());
        vector<int> p;
        unordered_map<int, int>ab;
        for (int i = 0; i < n; i++) {
            int v = log2(a[i]) + 1;

            if (ab.find(v) != ab.end()) {
               ab[v]++;
            } else {
              ab[v] = 1;
            }
            p.push_back(v);
        }

        sort(p.begin(), p.end());
        int cute = (p.empty()) ? 0 : ab[p.back()];
        int ans = (cute + 1) / 2;
        cout << ans << endl;
    }
}
