#include<bits/stdc++.h>
using namespace std;
int main() {
    long long  t;
cin >> t;
    while (t--) {
        long long y, x;
       cin >> y >> x;
        long long m =max(x, y);
        long long b, d;
        if (m % 2 == 0) {
            b = m * m - (m - 2);
            d =abs(x - y) - 1;
        } else {
            b = m * m - (m - 1);
            d =abs(x - y);
        }
        long long result = b + d;
cout << result <<endl;
    }
}
