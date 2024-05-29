#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long > a(n);
        for(long long  i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long>arr = a;
        sort(arr.begin(),arr.end());
        long long  sum = 0;
        long long  ans= n;
        for(long long i = 0; i < n; i++) {
            if(a[i] ==arr[ans-1]) {
                sum += (ans- 1);
                ans--;
            } else {
                long long pos = lower_bound(arr.begin(),arr.begin() +ans, a[i] + 1) -arr.begin();
                sum += (pos - 1);
                for(long long j = pos - 1; j <ans- 1; j++) {
                    arr[j] =arr[j + 1];
                }
               ans--;
            }
        }
        cout << sum << endl;
    }
}
