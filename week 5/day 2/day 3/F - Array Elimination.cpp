#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        long long arr[30]={0};
        for (long long i=0;i<n;i++) {
            cin >> a[i];
            for (long long j=0;j<30;j++) {
                if (a[i]&(1ll<<j))
                    arr[j]++;
            }
        }
        for (long long k=1;k<=n;k++) {
            bool f=false;
            for (long long i=0;i<30;i++) {
                if (arr[i] %k != 0) {
                    f = true;
                    break;
                }
            }
            if (!f)
                cout<<k<<" ";
        }
        cout<<endl;
    }
}
