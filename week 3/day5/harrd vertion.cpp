#include<bits/stdc++.h>
using namespace std;
void hobe()
{
int n;
cin>>n;
long long value=0;
    multiset<int>m;
    for (int i=0;i<n;i++)
    {
       int c;
        cin>>c;
        if (c > 0)
            m.insert(-c);
        else
        {
            if (!m.empty())
            {
                int x = *m.begin();
                value += (-x);
                m.erase(m.begin());
            }
        }
    }
    cout<<value<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hobe();
    }
}
