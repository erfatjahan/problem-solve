#include<bits/stdc++.h>
using namespace std;
int main() {
    long long  n;
    cin >> n;
    if (n == 1) {
        cout << 1;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        int i = 2;
        while (i <= n) {
            cout << i << " ";
            i += 2;
        }
        i = 1;
        while (i <= n) {
            cout << i << " ";
            i += 2;
        }
    }
}
