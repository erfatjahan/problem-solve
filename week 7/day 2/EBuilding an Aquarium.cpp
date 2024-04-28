#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long > a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        long long left =0, right = 2e9;
        while (left<= right) {
            long long mid = (left + right) / 2;
            long long sum = 0;
            for (int i = 1; i <= n; i++)
                sum += max(0LL, mid - a[i]);
            if (sum <= k) {
                    sum=left;
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        cout << right<< endl;
    }
}
