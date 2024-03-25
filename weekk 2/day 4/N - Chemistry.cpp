#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int cnt[26] = {0};
        int a,b;
        cin >>a>>b;
        string s;
        cin >> s;
        for (int i=0;i<a;i++) {
            cnt[s[i] - 'a']++;
        }
        int c= 0;
        for (int i = 0; i <26; i++) {
            c+= cnt[i] / 2;
        }
      int d =a-b;
        if (d / 2 <= c) {
            cout <<"YES"<<endl;
        } else {
            cout <<"NO"<<endl;
        }
    }
}
