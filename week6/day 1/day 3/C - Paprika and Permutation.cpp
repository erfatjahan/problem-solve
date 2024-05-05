#include<bits/stdc++.h>
using namespace std;

const int maxn = 100005;
int arr[maxn];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            arr[i] = 0;
        int ar[maxn], e[maxn];
        int c = 0, d = 0;

        for (int i = 1; i <= n; i++) {
            int be;
            cin >> be;
            if (be <= n && !arr[be])
                arr[be] = 1;
            else
                ar[c++] = be;
        }
        sort(ar, ar + c);
        for (int i = 1; i <= n; i++)
            if (!arr[i])
               e[d++] = i;
        int k = c, flg = 0;
        for (int i = 0; i < k; i++)
            if (ar[i] <= 2 * e[i]) {
                flg = 1;
                break;
            }
        if (flg)
            cout << -1 << endl;
        else
            cout << k << endl;
    }
}
