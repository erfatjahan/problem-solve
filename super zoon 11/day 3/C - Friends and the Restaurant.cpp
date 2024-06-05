#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
       long long arr[n],ar[n],a[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        for(int i=0;i<n;i++)
            a[i] = ar[i] -arr[i];
        sort(a,a+ n);
        long long ans =0;
        for (int i = 0,j=n-1;i<j; ) {
            if (a[i]+a[j] >= 0) {
                ans++;
                i++;
                j--;
            } else {
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
