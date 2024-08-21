#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        long long s = 0;
        for (int i = 0; i < n;i++) {
            cin >> a[i];
            s += a[i];
        }
        set<long long>arr;
        int ans= 0;
        for (int i = 0; i < n;i++) {
            int x = a[i];
            if (arr.find(x) != arr.end()) {
                ans= max(ans, x);
            } else {
                arr.insert(x);
            }
            b[i] =ans;
        }
        for (int i = 0; i < n;i++) {
            s += b[i];
        }
        arr.clear();
       ans= 0;
        for (int i = 0; i < n;i++) {
            int x = b[i];
            if (arr.find(x) != arr.end()) {
               ans= max(ans, x);
            } else {
                arr.insert(x);
            }
            b[i] =ans;
        }
        for (int i = 0; i < n;i++) {
            s+=b[i]*(n - i);
        }
        cout<<s<<endl;
    }
}
