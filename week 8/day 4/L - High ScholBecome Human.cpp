#include<bits/stdc++.h>
using namespace std;
int main() {
    double a,b;
    cin >> a >>b;
    if (a * log(b) > b* log(a)) {
        cout << "<";
    } else if (a* log(b) < b * log(a)) {
        cout << ">";
    } else {
        cout << "=";
    }
}
