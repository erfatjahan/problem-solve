#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
     long long  n,cnt=0,total=0;
    cin>>n;
    vector<long long  >a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        total+=a[i];
        cnt=min(total,cnt);
    }
    cout<<abs(cnt)<<"\n";
     }
}
