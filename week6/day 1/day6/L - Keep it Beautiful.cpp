#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr = -1;
        int ar = 0;
        bool ans= false;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (i == 0) {
                ar = a;
            }
            if (a >=arr && !ans) {
                cout << "1";
                arr = a;
            } else if (ar>= a && !ans) {
                cout << "1";
                ans = true;
                arr = a;
            } else if (ar >= a && a >= arr) {
                cout << "1";
                arr = a;
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}
