#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long ab = INT_MAX;
        for (int i = 1; i < n - 1; i++)
           ab = min(ab, max(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])));
        ab = min(ab, abs(a[0] - a[1]));
        ab = min(ab, abs(a[n - 2] - a[n - 1]));
        cout<<ab<<endl;
    }
}
