#include<bits/stdc++.h>
using namespace std;
int abc(long long n, long long m) {
    int cnt = 1;
    while(n*2<= m) {
        n*=2;
        cnt++;
    }
    return cnt;
}
int main() {
    long long n, m;
    cin >> n >> m;
    int result=abc(n,m);
    cout<<result;
}
