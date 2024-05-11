
#include <bits/stdc++.h>
using namespace std;

bool abc(long long n) {
    if (n == 1) {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool ans(long long n) {
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    for (int i = 0;i < n;i++) {
        if (abc(sqrtl(a[i])) && ans(a[i])) {
            cout << "YES" <<endl;
        }
        else {
            cout << "NO" <<endl;
        }
    }
}
