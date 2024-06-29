#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n;
        cin >> m;
       long long  arr[m];
        for (int i = 0; i < m;i++) {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        long long  b[m];
       long long ans = 0;
        for (int i = 0; i < m - 1;i++) {
            b[i] = arr[i + 1] - arr[i] - 1;
        }
        b[m - 1] = arr[0] + n - arr[m - 1] - 1;
        sort(b, b + m);
        for (int i = m - 1, j = 0; i >= 0; --i, j += 2) {
            if (b[i] > j + j + 1) {
                ans += b[i] - (j + j + 1);
            } else if (b[i] == j + j + 1) {
                ++ans;
            } else {
                break;
            }
        }
        cout << n - ans<< endl;
    }
}
