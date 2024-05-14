#include<bits/stdc++.h>
using namespace std;
int main() {
  long long n, a, b, c,d;
    cin >> n >> a >> b >> c >>d;
    int arr = n / a;
   int ar = n / b;
  int arrr= n / ((a * b)/ __gcd(a, b));
    if (c<d) {
        swap(c,d);
        swap(arr,ar);
    }
    cout << arr *c+ (ar - arrr) *d;
}
