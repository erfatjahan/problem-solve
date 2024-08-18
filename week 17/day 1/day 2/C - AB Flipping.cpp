#include <iostream>
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

        int max_operations = 0;

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'A' && s[i+1] == 'B') {
                max_operations++;
                i++; // skip the next character since we can only use each index once
            }
        }

        cout << max_operations << endl;
    }

    return 0;
}
