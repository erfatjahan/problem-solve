#include<bits/stdc++.h>
const int maxN = 2e5 + 5;
using namespace std;
int main()
{
    int t;
    cin>>t;
   while (t--) {
        int n;
        cin >> n;
        long long arr[maxN+1];
        for (int i = 1; i <= n; i++) {
            cin >>arr[i];
        }
        sort(arr+ 1,arr + n + 1);
        long long left = 0, right = 2e9,ans= 0,a,b;
        while (left <= right) {
            long long mid = (left + right) / 2;
            a = upper_bound(arr+ 1,arr+ n + 1,arr[1] + mid * 2) -arr;
            b = lower_bound(arr+1,arr+ n + 1,arr[n] - mid * 2) -arr- 1;
            if (arr[b] -arr[a] <= mid * 2) {
                right = mid - 1;
                ans= mid;
            } else {
                left = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
}
