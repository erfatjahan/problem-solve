#include<bits/stdc++.h>
using namespace std;
void hoice() {
    int n;
    cin >> n;
    vector<int>a(n);
    map<int, int>hobe;
    for (int i = 0; i < n;i++) {
        cin >>a[i];
        hobe[a[i]]++;
    }
    sort(a.begin(),a.end());
    int value=0;
    for (int i=0;i<n;i++) {
        if (!hobe.count(a[i])) continue;
        int x = 0;
        while (hobe.count(a[i] + x)) {
            hobe[a[i] + x]--;
            if(hobe[a[i]+x]==0)hobe.erase(a[i]+x);
            x++;
        }
        value++;
    }
    cout<<value<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        hoice();
    }
}
