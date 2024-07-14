#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >>a[i];
    unordered_map<int, int>arr;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = a[i] + a[j];
            arr[sum]++;
        }
    }
    int ans = 0;
    for (auto it :arr) {
        if (it.second >ans)
            ans = it.second;
    }
    cout<<ans<<endl;
}
