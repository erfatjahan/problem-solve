#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int ans= 0,value = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] != 2 && a[i] + b[i] != -2) {
                if (a[i] >= b[i]) ans+= a[i];
                else value+= b[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] + b[i] == 2) {
                if (ans>value)value++;
                else ans++;
            } else if (a[i] + b[i] == -2) {
                if (ans >value) ans--;
                else value--;
            }
        }
        cout << min(ans,value) << endl;
    }
}
