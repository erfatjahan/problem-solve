#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, ans = 0;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            int n;
            cin >> n;
            ans |= n;
        }
        cout << ans << '\n';
    }
    return 0;
}
