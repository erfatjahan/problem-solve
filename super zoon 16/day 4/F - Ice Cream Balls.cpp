#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k = 0;
        while ((k * (k + 1)) / 2 < n) {
            ++k;
        }
        cout << k << endl;
    }
}
