
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++) {
            cin >> a[i];
        }
        int ans= a[0];
        long long value= 0;
        for (int i = 1; i < n;i++) {
            if (a[i] * a[i - 1] >= 0) {
               ans= max(ans, a[i]);
            } else {
                value+=ans;
               ans = a[i];
            }
        }
        cout << value+ ans<< endl;
    }
}
