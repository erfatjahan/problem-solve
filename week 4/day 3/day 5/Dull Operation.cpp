#include<bits/stdc++.h>
using namespace std;
pair<int, int> abc(int N) {
    return make_pair(N, 0);
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        pair<int, int> xy = abc(N);
        cout << xy.first << " " << xy.second << endl;
    }
}
