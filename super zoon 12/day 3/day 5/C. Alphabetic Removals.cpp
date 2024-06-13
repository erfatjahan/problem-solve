
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 400005;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    list<int>a[26];
    for (int i = 0; i < n; ++i) {
        a[s[i] - 'a'].push_back(i);
    }
    bool arr[MAXN];
    memset(arr, false, sizeof(arr));
    int ar= 0;
    for (char c = 'a'; c <= 'z' &&arr< k; ++c) {
        while (!a[c - 'a'].empty() && ar< k) {
            int pos = a[c - 'a'].front();
            a[c - 'a'].pop_front();
           arr[pos] = true;
            ++arr;
        }
    }
    string result;
    for (int i = 0; i < n; ++i) {
        if (!to_remove[i]) {
            result += s[i];
        }
    }
    cout<<result<<endl;
}
