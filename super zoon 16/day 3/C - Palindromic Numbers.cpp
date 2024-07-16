#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ntc;
	cin >> ntc;
	while (ntc--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		if (s[0] == '9') {
			char res[n + 1]; // Create a character array to store the result
			res[n] = '\0';   // Null-terminate the array to make it a valid C-string

			for (int i = 0; i < n; i++) {
				int c = (int)(s[i] - '0');
				res[i] = (9 - c) + '0';
			}
			res[0] = '1';    // Set the first element to '1'
			res[n - 1] += 12; // Add 12 to the last element

			int carry = 0;
			for (int i = n - 1; i >= 0; i--) {
				int digit = res[i] - '0' + carry;
				carry = digit / 10;
				res[i] = (digit % 10) + '0';
			}
			cout << res << "\n";
		} else {
			for (int i = 0; i < n; i++) {
				int c = (int)(s[i] - '0');
				cout << (9 - c);
			}
			cout << "\n";
		}
	}
	return 0;
}
