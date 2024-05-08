#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main() {
    int t;
    cin >>t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long value = 1, ans = 0;
        for (; k > 0; k /= 2) {
            if (k % 2) ans = (ans + value) % MOD;
            value= (value * n) % MOD;
        }
        cout<<ans<<endl;
    }
}
