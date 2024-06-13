#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        unordered_map<long long ,long long >arr;
        for (int i = 0; i < n;i++) {
            int x;
            cin >> x;
            ++arr[x];
        }
     long long  value= 0;
        for (const auto& [key, count] :arr) {
            if (count % 2 != 0) {
                ++value;
            }
        }
        cout << value<<endl;
    }
}
