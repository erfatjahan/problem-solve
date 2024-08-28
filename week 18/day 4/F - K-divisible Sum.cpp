
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        long long remainder = n % k;
        if(remainder == 0) {
            cout << 1 << endl;
        }
        else {
            cout << (1 + (k - remainder)) << endl;
        }
    }
}
