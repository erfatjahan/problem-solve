#include<bits/stdc++.h>
using namespace std;
int main() {
   string s;
    cin >> s;
map<char, int> mp;
    for (auto i : s) {
        mp[i]++;
    }
    char x = '-';
    int c = 0;
    for (auto i : mp) {
        if (i.second % 2 == 1) {
            c++;
            x = i.first;
        }
    }
    if (c > 1) {
        std::cout << "NO SOLUTION";
        return 0;
    }
    std::string ans;
    for (auto i : mp) {
        if (i.first == x) continue;
        for(int j = 0; j < i.second / 2; j++) {
            ans += i.first;
        }
    }
    if (x != '-') {
        for(int i = 0; i < mp[x]; i++) {
            ans += x;
        }
    }
    for (auto i = mp.rbegin(); i != mp.rend(); i++) {
        if ((*i).first == x) continue;
        for(int j = 0; j < (*i).second / 2; j++) {
            ans += (*i).first;
        }
    }
   cout << ans;
}
