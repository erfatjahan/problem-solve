#include<bits/stdc++.h>
using namespace std;
char s[210000];
int main() {
    int t;
   cin>>t;
    for (int l = 0; l < t; l++) {
        cin>>s;
        int n = strlen(s);
        char c = s[0];
        vector<int> ans;
        int best = abs(s[n - 1] - s[0]);
        int cnt = 0;
        while (true) {
            for (int i = 0; i < n; i++) {
                if (s[i] == c) {
                    ans.push_back(i);
                }
            }
            if (c == s[n - 1]) {
                break;
            }
            if (c < s[n - 1]) {
                c++;
            } else {
                c--;
            }
        }
      cout << best << " " << (int)ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
         cout << ans[i] + 1 << " ";
        }
      cout<<endl;
    }
}
