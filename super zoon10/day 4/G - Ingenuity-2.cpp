#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        map<char, char> arr = {{'N', 'R'}, {'S', 'R'}, {'E', 'H'}, {'W', 'H'}};
        map<char, int> cnt;
        bool is_valid = true;
        stringstream ss;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            char move = arr[c];
            ss << move;
            cnt[move]++;
            arr[c] = (arr[c] == 'R' ? 'H' : 'R');
        }
        if (!cnt['R'] || !cnt['H'] || arr['N'] != arr['S'] || arr['E'] != arr['W']) {
            cout << "NO"<<endl;
        } else {
            cout << ss.str() <<endl;
        }
    }
}
