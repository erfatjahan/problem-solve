
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
 int arr[N + 5] = {0};
int main() {
    for (int i = 2; i <= N;i++) {
        if (arr[i] == 0) {
            for (int j = i; j <= N; j += i) {
               arr[j] = i;
            }
        }
    }
    int last = N;
    for (int i = N; i >= 1;i--) {
        if (arr[i] == i) {
            last = i;
        }
        arr[i] = last;
    }

    int c;
    cin >>c;
    while (c--) {
        int d;
        cin >> d;
        cout <<arr[d + 1] * arr[arr[d + 1] + d] << endl;
    }
}
