#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int>hobe(n);
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                cnt += i;
               hobe[i] =n-1-2*i;
            } else {
                cnt += n - 1 - i;
               hobe[i] = 2 * i + 1 - n;
            }
        }
        sort(hobe.begin(), hobe.end(), greater<int>());
        for (int k = 0; k < n; k++) {
            if (hobe[k] > 0) {
                cnt+=hobe[k];
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}
