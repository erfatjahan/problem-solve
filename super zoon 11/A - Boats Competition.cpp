#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long  arr[100];
        long long  ar[101] = {0};
        for (int i = 0; i < n;i++) {
            cin >> arr[i];
            ar[arr[i]]++;
        }
        long long ans = 0;
        for (int j = 2; j <= 2 * n;j++) {
           long long value= 0;
            for (int k= 1; k <=j/ 2;k++) {
                long long b =j- k;
                if (k== b)
                   value += ar[k] / 2;
                else
                    value+= min(ar[k],ar[b]);
            }
          ans = max(ans,value);
        }

        cout << ans<< endl;
    }
}
