
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int mn = 40;

    while (q--) {
        int x;
        cin >> x;

        if (x >= mn)
            continue;

        for(int i = 0; i < n; i++) {
            if ((a[i] % (1 << (x))) == 0)
                a[i] += (1 << (x - 1));
        }

        mn = min(mn, x);
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";
}
}
