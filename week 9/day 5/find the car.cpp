#include<bits/stdc++.
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K, Q;
        cin >> N >> K >> Q;

        int A[1<<17], B[1<<17];
        A[0] = B[0] = 0;

        for (int i = 1; i <= K; i++)
            cin >> A[i];

        for (int i = 1; i <= K; i++)
            cin >> B[i];

        for (int i = 0; i < Q; i++) {
            int d;
            cin >> d;

            int id = lower_bound(A, A + K + 1, d) - A;

            if (A[id] == d)
                cout << B[id];
            else
                cout << B[id - 1] + (long long)(B[id] - B[id - 1]) * (d - A[id - 1]) / (A[id] - A[id - 1]);

            if (i + 1 == Q)
                cout << "\n";
            else
                cout << " ";
        }
    }
}
