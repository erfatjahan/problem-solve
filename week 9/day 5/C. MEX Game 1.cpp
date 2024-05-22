
#include <iostream>
#include <cstring>
using namespace std;

void mset(int arr[], int size) {
    memset(arr, 0, size * sizeof(int));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count[n + 1];
        mset(count, n + 1);
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            count[temp]++;
        }
        bool used = false;
        for (int i = 0; i <= n; i++) {
            if (count[i] >= 2) {
                continue;
            } else if (count[i] == 1) {
                if (used) {
                    cout << i <<endl;
                    break;
                }
                used = true;
            } else {
                cout << i <<endl;
                break;
            }
        }
    }
}
