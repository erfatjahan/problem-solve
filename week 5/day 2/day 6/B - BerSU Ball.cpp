#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >>a[i];
    cin >> m;
    vector<int>b(m);
    for (int i = 0; i < m; i++)
        cin >>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    int value = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < m &&b[j] <a[i] - 1) {
            j++;
        }
        if (j < m &&b[j] <=a[i] + 1) {
            value++;
            j++;
        }
    }
    cout <<value<<endl;
}
