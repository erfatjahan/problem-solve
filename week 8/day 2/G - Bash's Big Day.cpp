#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
cin>>n;
    map<int, int>mapp;
    for(int i = 0, x; i < n; i++) {
       cin>>x;
        mapp[x]++;
    }
    int ans = 1;
    for(int i = 2; i <= 100000; i++) {
        int res = 0;
        for(int l = i; l <= 100000; l += i)
            res +=mapp[l];

        ans = max(ans, res);
    }
cout<<ans;
}
