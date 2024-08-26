#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int a[n + 1], ans[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ans[i] = 0;
    }
    int cnt = 0;
    for (int i = n; i >= 1; i--) {
        cnt = max(cnt, a[i]);
        if (cnt > 0) ans[i] = 1;
        cnt--;
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
}
