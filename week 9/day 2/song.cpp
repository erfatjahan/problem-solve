#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_set<long long> ar;
    long long  a = 0, c = 0;
    for (long long b = 0; b < n; b++) {
        while (ar.find(arr[b]) != ar.end()) {
            ar.erase(arr[a]);
            a++;
        }
        ar.insert(arr[b]);
        c = max(c, b - a + 1);
    }
    cout << c;
}
