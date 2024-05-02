
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    vector<int> t(n), z(n), y(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i] >> z[i] >> y[i];
    }
    int a=0;
    vector<int> b(n);

    while (m > 0) {
        int minTime = INT_MAX;
        int d= -1;

        for (int i = 0; i < n; ++i) {
            int c = t[i] * (m / z[i]) + min(t[i], m % z[i]);
            if (c < minTime) {
                minTime =c;
                d = i;
            }
        }

        a += minTime;
        b[d] += m / z[d] + (m % z[d] > 0 ? 1 : 0);
        m -= z[d];
        if (m > 0)
            a+= y[d];
    }
    cout << a<< endl;
    for (int e : b) {
        cout << e<< " ";
    }
    cout << endl;
}
