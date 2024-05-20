#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
vector<long long> a(n);
    for (int i = 0; i < n;i++) {
       cin >> a[i];
    }
vector<long long> arr(n, 0);
    long long c = 0, count = 0;
    arr[0] = 1;
    for (int i = 0; i < n;i++) {
        c = (c + a[i]) % n;
        if (c < 0) c += n;
        count += arr[c];
        arr[c]++;
    }cout << count <<endl;
}
