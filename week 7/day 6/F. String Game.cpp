
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string t, p;
    cin >> t >> p;

    vector<int> perm(t.size());
    for (int i = 0; i < t.size(); ++i) {
        cin >> perm[i];
    }

    int max_deleted = 0;
    int p_index = 0;

    for (int i = 0; i < t.size(); ++i) {
        if (p_index < p.size() && t[i] == p[p_index]) {
            max_deleted = i + 1;
            ++p_index;
        }
    }

    cout << max_deleted - p.size() << endl;

    return 0;
}
