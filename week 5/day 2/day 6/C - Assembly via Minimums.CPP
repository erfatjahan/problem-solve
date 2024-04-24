#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int total =n*(n-1)/2;
        vector<int>arr(total);
        for (int i = 0; i < total;i++) {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i =0;i<total;i+=--n) {
            cout <<arr[i] << " ";
        }
        cout<<arr[total-1]<<endl;
    }
}
