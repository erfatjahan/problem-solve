#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "="<<endl;
        } else {
            char c = a.back();
            char d = b.back();
            if (c>d) {
                cout <<"<"<<endl;
            } else if (c < d) {
                cout << ">"<<endl;
            } else {
                if ((a.size() > b.size() && c == 'L') || (a.size() < b.size() && d == 'S')) {
                    cout << ">"<<endl;
                } else {
                    cout << "<"<<endl;
                }
            }
        }
    }
}
