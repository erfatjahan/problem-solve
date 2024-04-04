#include<bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[maxn];
        bool z = false;
        long long sum = 0, count = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0)
                z = true;
            if (a[i] > 0 && z) {
                count++;
               z= false;
            }
        }
        count += z? 1 : 0;

        cout << sum << " " << count <<endl;
    }
}
