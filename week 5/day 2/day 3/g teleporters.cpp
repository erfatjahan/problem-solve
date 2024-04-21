#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long  n,i,j,c,value=0;
        cin>>n>>c;
        vector<long  long>x(n,0);
        for(i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            x[i]=a+i+1;
        }
        sort(x.begin(),x.end());
        for(i=0;i<n;i++)
        {
            if(c<x[i])
            break;
            value++;
            c-=x[i];
        }
        cout<<value<<endl;
    }
}
