
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
long long  a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    if(b==1)
        cout<<"no"<<endl;
    else{
        long long c=a*b;
    long long d=a+c;
    cout<<"yes"<<endl;
    cout<<a<<" "<<c<<" "<<d<<endl;
    }
}
}
