#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> last_position;
        long long result = 0;

        int last = -1;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (last_position.count(a[i])) {
                last = max(last, last_position[a[i]]);
            }
            last_position[a[i]] = i;
            result += i - last;
        }
        cout << result << endl;
    }

    return 0;
}
