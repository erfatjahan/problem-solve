#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
int num[MAXN];

void dfs(int x, int p = 0) {
    if (adj[x].size() == 1 && x != 1) num[x] = 1;
    else num[x] = 0;
    for (auto v : adj[x]) {
        if (v == p) continue;
        dfs(v, x);
        num[x] += num[v];
    }
}

void solve() {
    int N;
    cin >> N;
    int i, a, b;
    for (i = 1; i <= N; i++) adj[i].clear();
    for (i = 1; i < N; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    int Q;
    cin >> Q;
    while (Q--) {
        int a, b;
        cin >> a >> b;
        cout << 1LL * num[a] * num[b] << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}
