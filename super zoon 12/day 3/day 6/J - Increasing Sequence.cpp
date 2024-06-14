#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++) {
            cin >> a[i];
        }
        vector<int> b;
        set<int> chosen;
        int current = 1;
        for (int i = 0; i < n;i++) {
            while (chosen.count(current) || current == a[i]) {
                ++current;
            }
            b.push_back(current);
            chosen.insert(current);
        }
        cout << b.back() << endl;
    }
}
