#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s, m;
        cin >> s >> m;
        int a= 0;
        for (char c : s) {
            if (c == '0') {
                a += 1;
            } else {
                break;
            }
        }
        int b = 0;
        for (char c :m) {
            if (c == '0') {
                b += 1;
            } else {
                break;
            }
        }
        if (a > b) {
            cout << "NO" <<endl;
        } else {
            cout << "YES" <<endl;
        }
    }
}

