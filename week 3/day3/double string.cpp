#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, int>mapp;
        vector<string> S(n);
        for (int i = 0; i <n;i++) {
            cin >> S[i];
            mapp[S[i]] += 1;
        }
        string ans = string(n, '0');
        for (int i = 0; i < n;i++) {
            int l = S[i].length();
            for (int x = 1; x < l;x++) {
                string a=S[i].substr(0, x);
                string b=S[i].substr(x);
                if((a!=b&& mapp.count(a)&&mapp.count(b))||(a == b && mapp.count(a)))
                    ans[i]= 1;
            }
        }
        cout<<ans<<endl;
    }
}
