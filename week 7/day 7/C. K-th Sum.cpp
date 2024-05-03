
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> sums;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            sums.push_back(a[i] + b[j]);
        }
    }

    sort(sums.begin(), sums.end());

    cout << sums[k - 1] << endl;

    return 0;
}
