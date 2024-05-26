#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // Read input string
    int len = s.length(); // Get the length of the string

    // Print the required number of operations
    cout << 3 << endl;

    // Print the operations to transform the string
    cout << "R " << len - 1 << endl;
    cout << "L " << len << endl;
    cout << "L " << 2 << endl;

    return 0;
}
