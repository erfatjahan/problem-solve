#include <bits/stdc++.h>
using namespace std;
void solve() {
	long long  n;
	cin >> n;
	vector<long long > a(n);
	for (long long& i : a)
		cin >> i;

	long long c = 0, d= LLONG_MAX;
	for (long long  i : a) {
		c |= i;
	d &= i;
	}
	cout << (c- d) <<endl;
}
int main(void) {
	cout <<endl;
	int t;
	cin >> t;
	for (int i = 1; i <= t;i++)
		solve();
}
