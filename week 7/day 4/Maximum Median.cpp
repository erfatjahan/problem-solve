#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int low = 1, high = 1000000000;
    int max_x = 0;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int moves = 0;
        for (int i = n / 2; i < n; i++) {
            if (mid - v[i] > 0)
                moves += mid - v[i];
            if (moves > k)
                break;
        }
        if (moves <= k) {
            low = mid + 1;
            max_x = mid;
        } else {
            high = mid;
        }
    }

    cout << max_x - 1 << endl;

    return 0;
}
