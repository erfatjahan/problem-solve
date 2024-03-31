#include<bits/stdc++.h>
using namespace std;
void parbo() {
    int n;
    cin >> n;
    int a[n][n - 1];
    int cnt[n + 1] = {0};
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n - 1;j++) {
            cin >> a[i][j];
        }
        cnt[a[i][0]]++;
    }
    int fr = max_element(cnt + 1, cnt + n + 1)-cnt;
    cout << fr << ' ';
    for (int i = 0; i < n; ++i) {
        if (a[i][0] != fr) {
            for (int j = 0; j < n - 1;j++) {
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
    parbo();
    }
}
