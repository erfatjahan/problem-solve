
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] == '0') {
                j++;
            }
            int len = j - i;
            if (i == 0 || j == n) {
                count += len / (k + 1);
            } else {
                count += (len - k) / (k + 1);
            }
            i = j + k + 1;
        }
        cout << count << endl;
    }
}
