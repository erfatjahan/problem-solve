#include<bits/stdc++.h>
using namespace std;
int arr[20];
int main() {
    int t,a,b,c;
   cin>>t>>a>>b>>c;
    for (int i = 0; i <t;i++)
        cin>>arr[i];
    int ans = 0;
    for (int j= 1, e = 1 << t;j< e;j++) {
        int sum = 0;
           int m = INT_MIN,n = INT_MAX;
        for (int i = 0; i < t;i++) {
            if (j & (1 << i)) {
                sum += arr[i];
                m = max(m, arr[i]);
                n = min(n, arr[i]);
            }
        }
        if (a<= sum && sum <= b && m-n>= c)
            ans++;
    }
  cout<<ans<<endl;
}
