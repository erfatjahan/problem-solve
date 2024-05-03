#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int d,f,g;
    cin >> d >>f >> g;
    int h,i,j;
    cin >> h >> i >> j;
    long long r;
    cin >> r;
    long long low = 0, high = 1e15;
    long long ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long b = max(0LL, mid * (count(str.begin(), str.end(), 'B')) - d);
        long long s = max(0LL, mid * (count(str.begin(), str.end(), 'S')) - f);
        long long c = max(0LL, mid * (count(str.begin(), str.end(), 'C')) - g);
        long long cost = b * h +s * i +c * j;
        if (cost <= r) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}
