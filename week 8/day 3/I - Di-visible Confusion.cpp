#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool ans = false;
        long long c = 1;
        for(long long i = 0; i < n; i++){
            long long j = __gcd(c, i + 2);
            long long ar = ((i + 2) * c) /j;

            if(ar > 1e9){
                break;
            }
            if(arr[i] % ar == 0){
                ans = true;
                break;
            }
            else{
                c = ar;
            }
        }

        if(ans){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}
