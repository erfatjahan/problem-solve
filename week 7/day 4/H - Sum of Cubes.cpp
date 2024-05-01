#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = a.back() + k + 10;
    while (r - l > 1) {
        int b = (l + r) >> 1;
        int ans= 0;
        for (int i = n / 2; i < n;i++) {
            if (a[i] <b)
                ans += b - a[i];
        }
        if (ans <= k)
            l = b;
        else
            r = b;
    }
    cout<<l<<endl;
}
