#include<bits/stdc++.h>
using namespace std;
bool isBitSet(int num, int b) {
    return (num & (1 << b)) != 0;
}
string ab(vector<int>& arr, int c) {
    int n = arr.size();
    int abc = (1 << n) - 1;

    for (int j = 1; j<= abc; j++) {
        int a = -1;
        for (int i = 0; i < n; i++) {
            if (isBitSet(j, i)) {
                if (a == -1)
                  a = arr[i];
                else
                    a &= arr[i];
            }
        }
        if (a == c)
            return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << ab(arr, c) << endl;
    }
}
