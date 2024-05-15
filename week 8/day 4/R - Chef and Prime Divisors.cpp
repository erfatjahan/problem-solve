#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        while (true) {
            int temp = y;
            y = x % y;
            x = temp;
            if (y == 0)
                break;
        }

        if (x == 1) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }
}
