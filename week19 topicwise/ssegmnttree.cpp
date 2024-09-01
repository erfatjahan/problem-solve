#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int arr = a % 6;
    int ar = b;
    while (arr > 0) {
        if (arr % 2 == 1) {
            if (ar == 0) ar = 1;
            else if (ar == 1) ar = 0;
        } else {
            if (ar == 1) ar = 2;
            else if (ar == 2) ar = 1;
        }
        arr--;
    }
    cout << ar << endl;
}
