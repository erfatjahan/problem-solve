#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void read(vector<int>& v, int n) {
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    read(a, n);
    read(b, n);

    for(int i = 0; i < n; i++) {
        a[i] -= b[i];
    }

    int maxn = *max_element(a.begin(), a.end());
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        if(a[i] == maxn) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;
    for(int x : ans) {
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
