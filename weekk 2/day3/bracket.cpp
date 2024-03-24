#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a= 0;
        int cnt = 0;
        for (auto i:s) {
            if (i == '(') {
                cnt++;
            } else {
                cnt--;
            }
            a= min(a,cnt);
        }
        cout <<-a<<endl;
    }
}

