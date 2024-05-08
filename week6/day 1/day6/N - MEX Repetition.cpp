#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;
        int v[n + 1];
        long long sum = (long long)n * (n + 1) / 2;

        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
            sum = sum - v[i];
        }
        v[n] = sum;

        for (int i = 0; i < n; ++i)
            std::cout << v[(i + k) % (n + 1)] << " ";
        std::cout << "\n";
    }

    return 0;
}
