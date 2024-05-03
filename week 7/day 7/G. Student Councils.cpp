
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(int k, int n, const vector<int>& a, int councils) {
    vector<int> groups = a;
    sort(groups.begin(), groups.end(), greater<int>());

    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += min(k, groups[i]);
        if (total >= councils * k) return true;
    }
    return false;
}

int main() {
    int k, n;
    cin >> k >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int low = 1, high = n / k + 1;
    int result = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(k, n, a, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result * k << endl;

    return 0;
}
