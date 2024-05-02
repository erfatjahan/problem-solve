#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a,b);
    int low = 0, high = n *b;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int ans = mid / a + mid / b;

        if (ans< n)
            low = mid + 1;
        else
            high = mid;
    }

    cout << low << endl;
}
