#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool ans = false;  // Change `char` to `bool` for logical operations

    // Iterate over all possible starting points in `s`
    for (int st = 0; st < s.size(); st++) {
        string cur = "";

        // Move right starting from position `st`
        for (int i = st; i < s.size(); i++) {
            cur += s[i];
            string ccur = cur;
            if (ccur == t) {
                ans = true;
            }

            // Move left after reaching position `i`
            for (int j = i - 1; j >= 0; j--) {
                ccur += s[j];
                if (ccur == t) {
                    ans = true;
                }
            }
        }
    }

    // Output the result
    cout << (ans ? "YES\n" : "NO\n");

    return 0;
}
