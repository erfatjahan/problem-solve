#include <bits/stdc++.h>
using namespace std;
int main() {
    int t=1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
       long long a = 0, b = 0, f = 0;
        a += (s[0] - '0');
        for (long long  i = 1; i < (long long )s.size(); i++) {
            if (s[i] != '0')
                f = 1;
            if (f == 0) {
                a = a * 10 + (s[i] - '0');
            } else {
                b = b * 10 + (s[i] - '0');
            }
        }
        if (a < b)
            cout << a << " " << b <<endl;
        else
            cout << "-1"<<endl;
    }

}

