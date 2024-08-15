#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int size = n * k;
        vector<int> arr(size);

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        long long sum = 0;
        int medianIndex = (n + 1) / 2;

        // Starting from the last group, adding the medians
        for (int i = size - medianIndex; k > 0; k--) {
            sum += arr[i];
            i -= n;  // move to the previous group's median
        }

        cout << sum << endl;
    }

    return 0;
}
