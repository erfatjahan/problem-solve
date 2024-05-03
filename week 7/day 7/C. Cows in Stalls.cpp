
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    int low = 0, high = arr[n - 1] - arr[0];
    int result = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int a= 1;
        int b =arr[0];
        for (int i = 1; i < n; ++i) {
            if (arr[i] - b >= mid) {
                a++;
                b= arr[i];
            }
        }

        if (a>= k) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << result << endl;
}
