#include<bits/stdc++.h>
using namespace std;
int dekhi(int n, string s) {
    int length = n;
    int st= 0, end = n - 1;
    while (st < n && s[st]=='W')st++;
    while (end >= 0 && s[end] == 'W') end--;
    if (st>= n || end < 0) return 0;
    length=min(length,end-st+1);
    return length;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dekha= dekhi(n, s);
        cout <<dekha<< endl;
    }

}
