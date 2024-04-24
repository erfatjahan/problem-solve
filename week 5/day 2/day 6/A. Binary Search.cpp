#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < k; ++i) {
        int query;
        cin >> query;

        int left = 0;
        int right = arr.size() - 1;
        bool found = false;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == query) {
                found = true;
                break;
            } else if (arr[mid] < query) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
