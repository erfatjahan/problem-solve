#include<bits/stdc++.h>
using namespace std;
void value() {
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    vector<int>arr(n);
    int ar=b;
    int i=0;
  while(i<n) {
        cin >> arr[i];
        if (arr[i] >= a) {
            ar=ar+a-1;
        } else {
            ar=ar+arr[i];
        }

    i++;
}
    cout<<ar<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        value();
    }
}
