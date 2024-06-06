
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;

    // Read number of elements and number of queries
    cin >> n >> q;

    // Initialize vectors to store elements and prefix sums
    vector<int> x(n + 1);
    vector<int> ap(n + 2, 0); // We use n + 2 to handle bb + 1 indexing safely

    // Read elements into the vector x
    for (int i = 1; i <= n; ++i) {
        cin >> x[i];
    }

    // Sort the elements
    sort(x.begin() + 1, x.end());

    // Process queries and update prefix sums
    for (int i = 0; i < q; ++i) {
        int aa, bb;
        cin >> aa >> bb;
        ap[aa]++;
        if (bb + 1 <= n) {
            ap[bb + 1]--;
        }
    }

    // Accumulate the prefix sums
    for (int i = 1; i <= n; ++i) {
        ap[i] += ap[i - 1];
    }

    // Sort the prefix sums
    sort(ap.begin() + 1, ap.begin() + n + 1);

    // Calculate the result using the sorted elements and prefix sums
    long long rez = 0;
    for (int i = 1, j = n; i <= n; ++i, --j) {
        rez += 1LL * ap[j] * x[j];
    }

    // Output the result
    cout << rez << endl;

    return 0;
}
