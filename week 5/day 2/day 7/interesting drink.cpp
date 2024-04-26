#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    while (i < n) {
        cin >> arr[i];
        i++;
    }
    sort(arr, arr + n);
    int t;
    cin >>t;
    while(t--){
        int a;
        cin>>a;
        int count = upper_bound(arr,arr + n,a) -arr;
        cout << count<<endl;
    }
}
