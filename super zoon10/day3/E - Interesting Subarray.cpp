#include <iostream>
#include <vector>

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

        int max_diff = 0, l = -1, r = -1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                max_diff = max(max_diff, abs(a[i] - a[i + 1]));
                l = i + 1;
                r = i + 2;
                break;
            }
        }

        if (max_diff >= r - l) {
            cout << "YES" << endl;
            cout << l << " " << r << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
