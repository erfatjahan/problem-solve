#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
      int value = s1.size() + s2.size();
        for (int i = 0; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                int k = 0;
                while (i + k < s1.size() && j +k < s2.size() && s1[i + k] == s2[j + k]) {
                    k++;
                }
                value= min(value, int(s1.size() + s2.size() - 2 * k));
            }
        }
        cout<<value<<endl;
    }
}
