#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++) {
            cin >> a[i];
        }
        vector<int> c(n, 0);
        int value = 1;
        for (auto u : p) {
            bool ans = false;
            for (int i = 0; i < n;i++) {
                if (c[i] == 0 && a[i] % u == 0) {
                    c[i] =value;
                    ans = true;
                }
            }
            if (ans)
                ++value;
        }
        cout <<value - 1 <<endl;
        for (int i = 0; i < n;i++) {
            cout << c[i] << " ";
        }
        cout <<endl;
    }
}
