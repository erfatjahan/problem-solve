
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        bool found=true;
        for(int i=0;i<n;i++)
        {
    if(a[i]=='G' && b[i]=='B')
            {
                b[i]=a[i];
            }
            if(a[i]=='B' && b[i]=='G')
            {
                b[i]=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                found=false;
            }
        }

        if(found)
            cout << "yes" << endl;
        else
            cout <<"No" << endl;
    }
}
