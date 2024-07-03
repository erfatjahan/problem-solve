#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    vector<long long> c(m);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n;i++) {
        cin >> b[i];
    }
    for (int i = 0; i < m;i++) {
        cin >> c[i];
    }
    long long ans= 0;
    for (int j = 0; j < m;j++) {
        long long value= c[j];
        long long values = 0;
        for (int i = 0; i < n;i++) {
            if (a[i] > b[i]) {
                long long m= n/ (a[i] - b[i]);
                values= max(values, m * 2);
            }
        }
ans += values;
    }
    cout << value<< endl;
}
