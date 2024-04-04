#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    map<int,int>mapp,m;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        if(!mapp.count(x))mapp[x]=i;
        m[x]=i;
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        if(!mapp.count(x)||!mapp.count(y))
            cout<<"NO"<<endl;
        else if(mapp[x]<=m[y])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
