#include<bits/stdc++.h>
using namespace std;
pair<int, int> abc(int n) {
    int a = 1, b = 0, c = 0;
    while (n >> 1 != 0) {
        a = a << 1;
        if (n & 1 == 1) {
            b = b | (1 << c);
        }
        n = n >> 1;
        c = c + 1;
    }
    return make_pair(b, a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pair<int, int>ab= abc(n);
        cout << ab.first << " " << ab.second << endl;
    }
}
