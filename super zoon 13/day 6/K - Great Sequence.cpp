#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >>m;
        vector<int>arr(n);
        for (int i = 0; i <n; i++) {
            cin >>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<bool> used(n, false);
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                bool found = false;
                for (int j = i + 1; j <n; j++) {
                    if (!used[j] &&arr[j] ==arr[i] *m) {
                        used[j] = true;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    count++;
                }
            }
        }
        cout << count <<endl;
    }
}
