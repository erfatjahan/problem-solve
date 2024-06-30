#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--) {
        int a, b,c;
        cin >>a>>b>>c;
        while (c > 0 &&a > 1) {
          int ans = a % b;
            if (ans < b - 1) {
                int value = min(b- 1 -ans, c);
                a += value;
                c-= value;
                continue;
            }
            a += 1;
            while (a % b== 0) {
                a /= b;
            }
           c -= 1;
        }
        if (c> 0) {
            if (a== 1) {
                a= c % (b - 1) + 1;
            }
        }
        cout << a <<endl;
    }
}
