
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the maximum height of the tank
int maxHeightTank(int n, int x, vector<int>& a) {
    // Sort the coral heights in non-decreasing order
    sort(a.begin(), a.end());

    // Initialize the maximum height of the tank
    int maxH = 0;

    // Iterate over each column height
    for (int i = 0; i < n; i++) {
        // Calculate the water level if the tank has height a[i]
        int waterLevel = min(a[i], n - i);

        // Update the maximum height of the tank
        maxH = max(maxH, waterLevel);
    }

    // Check if we can use all the water
    if (maxH == n) {
        // If we can use all the water, return the maximum height possible
        return maxH;
    } else {
        // Otherwise, calculate the total water required for the maximum height
        int totalWater = 0;
        for (int i = 0; i < n; i++) {
            totalWater += min(a[i], maxH);
        }

        // If the total water required is less than or equal to x, return the maximum height
        if (totalWater <= x) {
            return maxH;
        } else {
            // Otherwise, find the maximum height that can be achieved using x units of water
            int remainingWater = x;
            int h = maxH;
            for (int i = 0; i < n; i++) {
                int waterToAdd = min(a[i], h) - 1;
                if (remainingWater >= waterToAdd) {
                    remainingWater -= waterToAdd;
                    h++;
                } else {
                    break;
                }
            }
            return h;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxHeightTank(n, x, a) << endl;
    }
    return 0;
}
