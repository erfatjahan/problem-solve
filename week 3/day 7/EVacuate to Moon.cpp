
#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, H;
        cin >> N >> M >> H;

        vector<int>a(N);
        for (int i = 0; i < N; ++i)
            cin >> a[i];

        vector<int> b(M);
        for (int i = 0; i < M; ++i)
            cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());

        int c= 0;
        for (int i = 0; i < N; ++i) {
            int hours = min(i + 1, H);
            int energy = min(b[i], a[i] * hours);
          c+= energy;
        }

        cout<<c<< endl;
    }
}
