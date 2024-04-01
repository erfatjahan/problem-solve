#include<bits/stdc++.h>
using namespace std;
void hobenakn() {
    long long sum = 0;
    multiset<int>a;
int n;
    cin >> n;
    while (n--) {
      int x;
        cin>>x;
        if(x==0) {
            if (!a.empty()) {
               int m = *a.rbegin();
                sum += m;
                a.erase(a.find(m));
            }
        } else
            a.insert(x);
    }

    cout<<sum<<endl;
}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        hobenakn();
    }
}
