#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

const int mod = 1e9 + 7;
const int MAX = 1e5 + 7;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll res = 0;
        vector<pair<int, int>> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin() + 1, a.end());
        pbds<int> st;
        for (int i = 1; i <= n; i++) {
            res += st.size() - st.order_of_key(a[i].second);
            st.insert(a[i].second);
        }
        cout << res << '\n';
    }
    return 0;
}
