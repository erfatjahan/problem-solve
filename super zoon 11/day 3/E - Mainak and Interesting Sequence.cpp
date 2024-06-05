#include <bots/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        if (n % 2 == 1) {
            if (m >= n) {
                cout << "Yes" <<endl;
                for (int i = 0; i < n - 1;i++) {
                    cout << "1 ";
                }
                cout << (m - n + 1)<<endl;
                continue;
            }
        }
        else {
            if (m % 2 == 0 && m >= n) {
                cout << "Yes" <<endl;
                for (int i = 0; i < n - 2;i++) {
                    cout << "1 ";
                }
                int r = (m - (n - 2)) / 2;
                cout << r << " " << r <<endl;
                continue;
            }
        }
        cout << "No" <<endl;
    }
}
