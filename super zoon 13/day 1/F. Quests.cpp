#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000;
const int MAXN = 200005;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long c;
        int d;
        cin >> n >> c >> d;
        int a[MAXN];
        for (int j = 0; j < n; j++){
            cin >> a[j];
        }
        int ans= -1,value = INF;
        while (value -ans> 1){
            long long  mid = (ans +value) / 2;
            priority_queue<pair<int, int>> pq;
            for (int j = 0; j < n; j++){
                pq.push(make_pair(a[j], j));
            }
            queue<pair<int, int>> Q;
            long long sum = 0;
            for (int j = 0; j < d; j++){
                if (!Q.empty() && Q.front().first == j){
                    int x = Q.front().second;
                    pq.push(make_pair(a[x], x));
                    Q.pop();
                }

                if (!pq.empty()){
                    sum += pq.top().first;
                    int x = pq.top().second;
                    pq.pop();
                    Q.push(make_pair(j + mid + 1, x));
                }
            }

            if (sum >= c){
                ans= mid;
            } else {
                value = mid;
            }
        }
        if (ans == -1){
            cout << "Impossible" << endl;
        } else if (ans== INF - 1){
            cout << "Infinity" << endl;
        } else {
            cout << ans << endl;
        }
    }
}
