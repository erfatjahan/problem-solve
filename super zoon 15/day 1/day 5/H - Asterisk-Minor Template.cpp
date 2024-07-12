#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s, a;
    cin >> s >> a;

    if (s.size() != a.size()) {
        cout << "NO\n";
        return 0;
    }

    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    bool ans = true;

    for (int i = 0; i < s.size(); i++) {
        if ((vowels.count(s[i]) && !vowels.count(a[i])) || (!vowels.count(s[i]) && vowels.count(a[i]))) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
