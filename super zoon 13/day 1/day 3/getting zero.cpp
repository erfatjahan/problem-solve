
#include <iostream>
#include <algorithm>
using namespace std;

const int mod = 32768;
const int MAXN = 100005;

int a[MAXN], b[MAXN];

int D(int x, int y)
{
    return max(x, y) - min(x, y);
}

int computeMinimumSteps(int x)
{
    int ans = 1e9;
    for (int i = 0; i <= 20; i++)
    {
        int y = x + i;
        y %= mod;
        int t = i;
        while (y)
            y = y * 2 % mod, ++t;
        ans = min(ans, t);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        int ans = computeMinimumSteps(x);
        cout << ans << " ";
    }
    return 0;
}
