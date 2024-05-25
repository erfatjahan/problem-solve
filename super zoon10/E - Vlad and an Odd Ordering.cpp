#include<bits/stdc++.h>
using namespace std;
int main() {
    cout << fixed << setprecision(20);
    int t;
    cin >>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int i = 1;
        while (true) {
            if ((n + 1) / 2 >= m) {
                cout << i * (2 * m - 1) <<endl;
                break;
            } else {
                m -= (n + 1) / 2;
                n /= 2;
            }
            i *= 2;
        }
    }
}
