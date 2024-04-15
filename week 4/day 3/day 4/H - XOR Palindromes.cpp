
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> ans(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                ans[i + 1] = 1;
                break;
            }
        }

        for (int i = 1; i <= n; ++i) {
            if (ans[i] == 1) {
                int j = i + 1;
                while (j <= n) {
                    if (s[j - 1] == '1') {
                        ans[j] = 1;
                        j += i;
                    } else {
                        ++j;
                    }
                }
            }
        }

        for (int i = 0; i <= n; ++i) {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
