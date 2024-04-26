
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int>abc(n);
        for (int i = 0; i < n;i++) {
            cin >>abc[i];
        }
        sort(abc.begin(),abc.end());
        while (q--) {
            int x;
            cin >> x;
            int left = 0, right = n - 1;
            int ans = -1;
            while (left <= right) {
                int mid = left + (right - left)/2;
                if (abc[mid] >= x) {
                    ans =n-mid;
                    right=mid-1;
                } else {
                    left=mid+1;
                }
            }
            cout<<ans<<endl;
        }
    }
}
