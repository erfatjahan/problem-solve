#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long >ans;
    if (n % 2 == 0) {
        for (int i = 0;i<n/2;i++) {
           ans.push_back(2);
        }
    } else {
        ans.push_back(3);
        for (int i = 0;i<(n-3)/2;i++) {
          ans.push_back(2);
        }
    }
    cout << ans.size() << endl;
    for (int value : ans) {
        cout << value << " ";
    }
    cout << endl;
}
