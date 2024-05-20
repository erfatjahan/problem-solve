#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
  cin >> n >> x;
  vector<long long > arr(n);
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    int a = 0, cnt = 0, sum = 0;
    for (int b = 0; b < n;b++) {
        sum += arr[b];
        while (sum > x && a <= b) {
            sum -= arr[a];
            a++;
        }
        if (sum == x) {
            cnt++;
        }
    }
cout<<cnt;
}
