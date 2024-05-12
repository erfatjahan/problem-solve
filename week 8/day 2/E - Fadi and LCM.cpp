#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  n;
    cin >> n;
    long long ans = 1e18;
    long long value= 1, b = n;
    for(long long i=1;i*i<=n;i++) {
        if((n%i)==0&&__gcd(i,n/i)==1) {
            long long e=max(n/i,i);
            if (e <ans) {
                ans = e;
                value= n / i;
                b = i;
            }
        }
    }
    cout << b << " " <<value;
}
