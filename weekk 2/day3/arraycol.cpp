#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        map<int,int>mp;
        int c = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            c=max(c, ++mp[x]);
        }
        int d=n-c;
        while (c<n) {
            d++;
            c*=2;
        }
        cout <<d<< endl;
    }
}
