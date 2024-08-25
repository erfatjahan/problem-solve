#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int>arr,ar;

        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
               arr.push_back(i);
            } else {
                ar.push_back(i);
            }
        }

        if (ar.size() >= 3) {
            cout << "YES" << endl;
            cout <<ar[0] << " " <<ar[1] << " " <<ar[2] <<endl;
        } else if (ar.size() >= 1 && arr.size() >= 2) {
            cout << "YES" << endl;
            cout <<ar[0] << " " <<arr[0] << " " << arr[1] <<endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
