#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        long long sum = 0;
        int summ = 0;
        while (a--) {
            int x;
            cin >> x;
            if (x > c) {
               summ= 0;
            } else {
                summ++;
                if (summ>= b) {
                    sum += summ- b + 1;
                }
            }
        }
        cout << sum << endl;
    }
}
