
#include <iostream>
#include <vector>

#define x 200010

using namespace std;

int main() {
    long n, k, q;
    cin >> n >> k >> q;

    vector<long> l(x, 0), p(x, 0);
    long s, e;

    // Read intervals and apply interval updates
    for (long i = 0; i < n; ++i) {
        cin >> s >> e;
        l[s]++;
        if (e + 1 < x) l[e + 1]--;
    }

    // Calculate the prefix sum and count the intervals where prefix sum >= k
    long a = 0, c = 0;
    for (long i = 1; i < x; ++i) {
        a += l[i];
        if (a >= k) c++;
        p[i] = c;
    }

    // Process queries
    for (long i = 0; i < q; ++i) {
        cin >> s >> e;
        cout << (p[e] - p[s - 1]) << endl;
    }

    return 0;
}
