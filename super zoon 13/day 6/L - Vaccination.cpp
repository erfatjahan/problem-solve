
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m,o, p;
        cin >> n >> m >> o >> p;
        o += p;
        vector<int> arr(n);
        for (int i = 0; i < n;i++) {
            cin >> arr[i];
        }
      long long r = 0, ar = 0,a = 0;
        for (long long  q : arr) {
            if (!ar || q > a) {
                a = q + o;
                ar = m - 1;
                ++r;
            } else {
                --ar;
            }
        }

        cout << r <<endl;
    }
}
