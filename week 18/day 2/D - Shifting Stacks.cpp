
#include <iostream>
using namespace std;

int main() {
    int TT;
    cin >> TT;

    while(TT--) {
        int n;
        cin >> n;
        int a[n];

        // Read the array elements
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Process the array
        for(int i = 0; i < n - 1; ++i) {
            if(a[i] > i) {
                a[i + 1] += (a[i] - i);
                a[i] = i;
            }
        }

        // Check if the array is strictly increasing
        bool flag = true;
        for(int i = 1; i < n; ++i) {
            if(a[i] <= a[i - 1]) {
                flag = false;
                break;
            }
        }

        // Output the result
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
