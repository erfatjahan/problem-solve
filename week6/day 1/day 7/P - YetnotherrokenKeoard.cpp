
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    while (t--) {
        string s;
        cin >> s;
        vector<char> ans;
        vector<int>value;
        vector<int>arr;

        for (char i : s) {
            if (i != 'b' && i != 'B') {
                ans.push_back(i);
                if (islower(i)) {
                    value.push_back(ans.size() - 1);
                } else {
                    arr.push_back(ans.size() - 1);
                }
            }
            if (i == 'b') {
                if (!value.empty()) {
                    ans[value.back()] = ' ';
                    value.pop_back();
                }
            }
            if (i == 'B') {
                if (!arr.empty()) {
                    ans[arr.back()] = ' ';
                    arr.pop_back();
                }
            }
        }
        for (char c : ans) {
            if (c != ' ') {
                cout << c;
            }
        }
        cout << endl;
    }
}
