
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(const vector<int>& nums, int k, int max_sum) {
    int segments = 1;
    int current_sum = 0;
    for (int num : nums) {
        if (current_sum + num > max_sum) {
            segments++;
            current_sum = num;
        } else {
            current_sum += num;
        }
    }
    return segments <= k;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int low = 1, high = 1e9;
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(nums, k, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << result << endl;

    return 0;
}
