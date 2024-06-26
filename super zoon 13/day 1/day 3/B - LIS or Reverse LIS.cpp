#include <bits/stdc++.h>
using namespace std;
void value() {
    int n;
    cin >> n;
    map<int, int>arr;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }
    long long ar = 0;
    for (auto it:arr) {
        ar+= min(2, it.second);
    }
   ar= (ar + 1) / 2;
    cout <<ar<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        value();
    }
}
