#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int k=-1,value=INT_MIN;
        s += s;
        int i=s.length()-1;
        while(i>=0) {
            if (s[i]=='g') {
                k = i;
            }
            if (s[i]==c) {
                value=max(value,k - i);
            }
            i--;
        }
        cout << value << endl;
    }
}
