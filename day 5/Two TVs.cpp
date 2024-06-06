#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    int i, j, k;
    vector<pair<long long ,long long >> v;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> j >> k;
        v.push_back(a(j, -1));
        v.push_back(a(k, 1));
    }
    sort(v.begin(), v.end());
    int c = 0;
    for (i = 0; i < v.size(); i++) {
        c -= v[i].second;
        if (c > 2) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
