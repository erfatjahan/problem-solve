#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    multiset<long long > arr;
    for (int i = 0; i < n;i++) {
        int h;
        cin >> h;
        arr.insert(h);
    }
    for (int i = 0; i < m;i++) {
        int t;
        cin >> t;
        auto it = arr.upper_bound(t);
        if (it == arr.begin()) {
            cout << -1 <<endl;
        } else {
            --it;
            cout << *it << endl;
            arr.erase(it);
        }
    }
}
