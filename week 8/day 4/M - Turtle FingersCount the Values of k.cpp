#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        set<int> s;
        int ans= 20;
        int value= 20;
        int i = 0;
        while (i <=ans) {
            int j = 0;
            while (j <= value) {
                int arr = c;
                bool f = false;
                for (int jj = 0; jj < i; jj++) {
                    if (arr % a == 0)
                        arr /= a;
                    else
                        f = true;
                }
                for (int jj = 0; jj < j; jj++) {
                    if (arr % b == 0)
                        arr/= b;
                    else
                        f = true;
                }
                if (!f)
                    s.insert(arr);
                j++;
            }
            i++;
        }

        cout << s.size() <<endl;
    }
}
