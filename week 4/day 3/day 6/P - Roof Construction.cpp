#include <bits/stdc++.h>
using namespace std;
int abc(int n) {
    int k = 0;
    while ((1 << (k + 1)) <= n - 1)
        ++k;
    return k;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int k = abc(n);
        for (int i = (1 << k)-1;i>=0;i--)
        {
            cout<<i<<' ';
        }
        for (int i = (1 << k); i < n; i++)
        {
            cout<<i<<' ';
        }
        cout << '\n';
    }
}
