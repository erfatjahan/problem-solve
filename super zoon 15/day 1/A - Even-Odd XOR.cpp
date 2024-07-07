#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int x = 0;
        for (int i = 1; i <= n - 3; i++) {
            cout << i << " ";
            x ^= i;
        }
        int a = 1 << 29;
        int b = 1 << 30;
        cout << a << " " << b << " ";
        x ^= (a ^ b);
        cout << x << endl;
    }
}
