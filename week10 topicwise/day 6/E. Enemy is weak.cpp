#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000500
long long ans = 0, s2[MAXN];
int n, s1[MAXN];
pair<int, int> a[MAXN];
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = 1 + i;
    }
sort(a, a + n);
    for(int i = n - 1; i >= 0; i--) {
        int cr = 0;
        for(int j = a[i].second - 1; j; j &= (j - 1)) {
            cr += s1[j];
            ans += s2[j];
        }
        for(int j = a[i].second; j < MAXN; j = (j | (j - 1)) + 1) {
            s1[j]++;
            s2[j] += cr;
        }
    }
cout <<ans <<endl;
}
