#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;
        int n=(a.size()/2);
        int d=n-1;
        bool found=true;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[0])
            {
                counter++;
            }
            d--;
        }
        if(counter==n)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YEs" << endl;
    }

}

