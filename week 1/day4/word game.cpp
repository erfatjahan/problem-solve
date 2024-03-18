#include<bits/stdc++.h>
using namespace std;
int abc(const string s[], int n, const map<string, int>& mp) {
    int a= 0;
    for (int i = 0; i < n; i++) {
        if (mp.at(s[i]) == 1) a+= 3;
        else if (mp.at(s[i]) == 2)a+= 1;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++) {
            int a = abc(s[i], n, mp);
            cout << a<< " ";
        }
        cout << endl;
    }
    return 0;
}
