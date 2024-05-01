#include<bits/stdc++.h>
using namespace std;
const int maxn= 2e5 + 5;
int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        int a[maxn+1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);
        int left = 0,right= n, ans = 0;
        while (left <=right) {
            int mid = (left +right) / 2;
            bool abc= true;
            for (int i = mid; i <= min(mid + mid - 1, n); i++) {
                if (a[i] > i - mid + 1) {
                   abc = false;
                    break;
                }
            }
            if (abc) {
                ans = mid;
                left= mid + 1;
            } else {
               right= mid - 1;
            }
        }
        if (ans)
            cout<<ans<<endl;
        else
            cout<<"0"<<endl;
    }
}
