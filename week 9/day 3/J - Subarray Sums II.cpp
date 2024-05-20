
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long  n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
unordered_map<long long ,long long > arr;
  long long count = 0, sum = 0;
    arr[0] = 1;
    for (int i = 0; i < n;i++) {
        sum += a[i];
        count += arr[sum - x];
        arr[sum]++;
    }
cout << count << std::endl;
}
