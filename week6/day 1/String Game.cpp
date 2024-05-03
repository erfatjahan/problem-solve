
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >>t;
    const string arr[] = {"Ramos","Zlatan"};
    for (int i = 0; i <t;i++) {
        int n;
        cin >>n;
        string S;
        cin >> S;
        int ar= max(count(S.begin(), S.end(), '0'), count(S.begin(), S.end(), '1'));
        int a = n -ar;
        cout <<arr[a % 2] << endl;
    }
}
