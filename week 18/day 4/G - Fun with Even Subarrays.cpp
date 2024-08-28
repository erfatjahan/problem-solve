
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int operations = 0;
    while (true) {
        int similar_suffix = 0;
        for (int i = n; i >= 1; i--) {
            if (a[i] != a[n]) {
                break;
            }
            similar_suffix = n - i + 1;
        }
        if (similar_suffix == n) {
            break;
        }
        for (int i = max(1, n - 2 * similar_suffix + 1); i <= n; i++) {
            a[i] = a[n];
        }

        // Increment the number of operations
        operations++;
    }

    // Output the number of operations
    cout << operations << "\n";

    return 0;
}
}
