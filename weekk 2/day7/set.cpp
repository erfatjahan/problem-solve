#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    vector<int> nums(a);
    for (int i = 0; i < a; i++) {
        cin >> nums[i];
    }
    const int maxi= 100001;
    vector<int> freq(maxi, 0);
    int l = 0;
    long long cnt = 0, cntt = 0;
    for (int r = 0; r < a; r++) {
        if (freq[nums[r]] == 0) {
            cnt++;
        }
        ++freq[nums[r]];
        while (cnt > b) {
            --freq[nums[l]];
            if (freq[nums[l]] == 0) {
                cnt--;
            }
            l++;
        }
        cntt += r - l + 1;
    }
    cout << cntt;
}
