#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long >arr(k);
        for (int i = 0; i < k; i++) {
            cin >>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        arr[0]=n-arr[0];
        for (int i = 1; i < k; i++) {
            arr[i] =arr[i - 1] + (n -arr[i]);
        }
        auto it = lower_bound(arr.begin(),arr.end(), n);
        cout << it -arr.begin() << endl;
    }
}
