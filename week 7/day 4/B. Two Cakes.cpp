#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int value = 0;
    int i = 1;
    while (i < n) {
        int c= a / i;
        int ans= n - i;
        int d = b /ans;
        value= max(value, min(c, d));
        i++;
    }
    cout <<value;
}
