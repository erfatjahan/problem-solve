#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        unsigned long long n, k;
        cin >> n >> k;
        unsigned long long ans = k;
        if(k < n)
            cout<<k<<endl;
        else if(k == n)
            cout << k + 1 << endl;
        else {
            while(k >= n) {
                ans += k / n;
                if(k / n == 1)
                    k = k / n;
                else
                    k = (k / n) + (k % n);
            }
            if(ans % n == 0)
                ans++;
            cout << ans << endl;
        }
    }
}
