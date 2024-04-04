#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<string>abc(n);
    for (int i = 0; i <n;i++)
        cin >> abc[i];
    string result;
    for (int i =n - 1; i >= 0;i--) {
        result += abc[i].substr(abc[i].length() - 2);
    }
    cout << result << endl;
}
