
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a>>b;
        int ans = 0;
        for (int i = 1; i <=a; i++) {
            ans += 2;
            if (ans >a) {
                ans = 1;
            }
            for (int j = 1; j <=b; j++) {
                cout << (ans - 1) * b+ j << " ";
            }
            cout <<endl;
        }
    }
}
