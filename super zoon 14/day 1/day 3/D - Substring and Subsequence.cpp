#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int j = 0;j< t;j++) {
        string a,b;
        cin>>a>>b;
        int n = a.length();
        int m = b.length();
        int ans= 0;
        for (int i = 0; i <m; i++) {
            int value = 0;
            int values= i;
            for (int j = 0; j < n&& values<m; j++) {
                if (a[j] == b[values]) {
                    values++;
                    value++;
                }
            }
          ans = max(value,ans);
        }
        int result =n+m -ans;
        cout << result << endl;
    }
}
