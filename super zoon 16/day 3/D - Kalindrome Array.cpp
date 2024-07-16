
#include<bits/stdc++.h>
using namespace std;
bool ans(const vector<int>& arr, int left, int right) {
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int left = 0, right = n - 1;
        while (left < right) {
            if (arr[left] != arr[right]) {
                if (ans(arr, left + 1, right) ||ans(arr, left, right - 1)) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
                break;
            }
            left++;
            right--;
        }
        if (left >= right) {
            cout << "YES" << endl;
        }
    }
}
