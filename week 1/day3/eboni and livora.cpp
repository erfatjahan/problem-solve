
#include<bits/stdc++.h>
using namespace std;
bool abc(int a, int b, int c) {
    for (int i= 0; i * a <= c; i++) {
        int j = c - i* a;
        if (j % b == 0)
            return true;
    }
    return false;
}
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (abc(a, b, c))
        cout << "Yes";
    else
        cout << "No";
}
