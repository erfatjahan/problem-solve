#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long a;
    cin >> n >>a;
    vector<pair<long long, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        int b = i + 1;
        int c = n - 1;
        while (b < c) {
            long long sum = arr[i].first + arr[b].first + arr[c].first;

            if (sum == a) {
                cout << arr[i].second << " " << arr[b].second << " " << arr[c].second;
                return 0;
            } else if (sum < a) {
                b++;
            } else {
                c   --;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
