
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    long long n, m, k;
    cin >> n >> m >> k;

    long long  ar[n];
    long long arr[m];

    for (long long i = 0; i < n; i++) {
        cin >> ar[i];
    }

    for (long long i = 0; i < m; i++) {
        cin >>arr[i];
    }
    long long count = 0;
    long long sum = 0;
    for (long long  i = 0; i < n; i++) {
        for (long long  j = 0; j < m; j++) {
            sum = 0;
            sum = ar[i]+arr[j];
            if (sum <= k) {
                count++;
            }
        }
    }
    cout << count << endl;
}

}
