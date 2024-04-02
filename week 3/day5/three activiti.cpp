#include <bits/stdc++.h>
using namespace std;

void hobe() {
    int n;
    cin >> n;
    int b[3][n];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    int a[8] = {0}; // Initialize with zeros
    for (int i = 0; i < n; ++i) {
        for (int k = 7; k; k--) { // Start from 7
            for (int j = 0; j < 3; j++) {
                if (!(k & (1 << j))) {
                    continue;
                }
                a[k] = max(a[k], a[k ^ (1 << j)] + b[j][i]);
            }
        }
    }
    cout << a[7] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        hobe();
    }
    return 0;
}
