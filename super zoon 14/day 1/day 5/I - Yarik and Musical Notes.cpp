#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        map<long long ,long long >arr;
       long long  ans = 0;
        for (int i = 0; i < n; i++) {
            long long  a;
            cin >> a;
            ans +=arr[a]++;
            if (a== 1) {
                ans +=arr[2];
            } else if (a == 2) {
                ans +=arr[1];
            }
        }
        cout << ans << endl;
    }
}
