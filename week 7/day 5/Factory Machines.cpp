#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> n >> t;
    vector<int>arr(n);
    for (int i = 0; i < n; ++i) {
        cin >>arr[i];
    }
    long long left = 1, right = 1e18;
    long long ans = -1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long value = 0;
        for (int ar:arr) {
            value += mid / ar;
            if (value >= t) {
                ans = mid;
                right = mid - 1;
                break;
            }
        }
        if (value< t) {
            left = mid + 1;
        }
    }
    cout << ans << endl;
}
