#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum[n+1];
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i-1] + a[i-1];
    }
    int b;
    cin >>b;
    for (int i = 0; i <b;i++) {
        int x;
        cin >> x;
        int *abc =lower_bound(sum,sum+n+1,x);
        cout <<abc-sum<<endl;
    }
}
