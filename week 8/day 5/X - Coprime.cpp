#include<bits/stdc++.h>
using namespace std;
const int N = 1001;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[N];
        for (int i = 0; i < N;i++) {
            arr[i] = -1;
        }
        for (int i = 0; i < n;i++) {
            int x;
            cin >> x;
            arr[x] = i;
        }
        int ans = -1;
        for (int i = 1; i < N; ++i) {
            for (int j = i; j < N; ++j) {
                if (__gcd(i, j) == 1 && arr[i] >= 0 &&arr[j] >= 0) {
                    ans = max(ans, arr[i] +arr[j] + 2);
                }
            }
        }
        cout << ans <<endl;
    }
}
