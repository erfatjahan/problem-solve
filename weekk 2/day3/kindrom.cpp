#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        int c = 0, b = -1;
        int i = 0, j = n - 1;
        while (i < j) {
            if (a[i] == a[j]) {
                i++;
                j--;
                continue;
            }
            if (b == -1) {
                c++;
                b = a[i];
                int t = i, r = j;
                ++i;
                while (i < j) {
                    if (a[i] == a[j]) {
                        i++;
                        j--;
                        continue;
                    }
                    if (a[i] == b)
                        ++i;
                    else if (a[j] == b)
                        --j;
                    else {
                        i = t;
                        j = r;
                        break;
                    }
                }

                --j;
                b = a[j + 1];
                while (i < j) {
                    if (a[i] == a[j]) {
                        i++;
                        j--;
                        continue;
                    }
                    if (a[i] == b)
                        ++i;
                    else if (a[j] == b)
                        --j;
                    else {
                        cout << "NO" << endl;
                        break;
                    }
                }
                break;
            }
        }
        if (i >= j)
            cout << "YES" << endl;
    }
}
