
#include <bits/stdc++.h>
using namespace std;
    int main(){
    int t;
    cin >>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());
        if (a[0] == a[n-1]) {
            cout << "NO"<<endl;
            continue;
        }
        cout << "YES"<<endl;
        swap(a[1], a[n-1]);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout <<endl;
    }
}
