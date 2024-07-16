
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int deletions = 0;

    // Stack-based approach to count the deletions
    string stack;
    for (char c : s) {
        if (!stack.empty() && stack.back() == c) {
            stack.pop_back();  // simulate deletion
            deletions++;
        } else {
            stack.push_back(c);
        }
    }

    if (deletions % 2 == 1) {
        cout << "Yes" << endl; // First player wins
    } else {
        cout << "No" << endl;  // Second player wins
    }

    return 0;
}
