
#include<bits/stdc++.h>
using namespace std;
int main() {
     ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    set<int> s;
    priority_queue<pair<int, int>>a;
    int c = 1;
    int j = 1;
    while(t--) {
        int x;
        cin >> x;
        if(x == 1) {
            int m;
            cin >> m;
            a.push({m, -c++});
        }
        else if(x == 2) {
            for(; j < c; j++) {
                if(s.find(j) == s.end()) {
                    cout << j << " ";
                    s.insert(j);
                    break;
                }
            }
        }
        else if(x == 3) {
            while(!a.empty() && s.find(-a.top().second) != s.end()) {
                a.pop();
            }
            if(!a.empty()) {
                cout << -a.top().second << " ";
                s.insert(-a.top().second);
                a.pop();
            }
        }
    }
}
