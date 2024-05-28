#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ar[200000];
        for (int i = 0; i < n;i++) cin >> ar[i];
        map<array<long long , 3>,long long >ans;
        long long value = 0;
        for (int i = 0; i + 2 < n;i++) {
            int arr= ans[{ar[i], ar[i + 1], ar[i + 2]}];
            value  += ans[{ar[i], ar[i + 1], 0}] - arr;
            value  += ans[{ar[i], 0, ar[i + 2]}] - arr;
           value += ans[{0, ar[i + 1], ar[i + 2]}] - arr;

           ans[{ar[i], ar[i + 1], 0}]++;
           ans[{ar[i], 0, ar[i + 2]}]++;
            ans[{0, ar[i + 1], ar[i + 2]}]++;
            ans[{ar[i], ar[i + 1], ar[i + 2]}]++;
        }
        cout << value<<endl;
    }
}
