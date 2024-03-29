#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++ ){
        s[i]= tolower(s[i]);
    }
    if( s[0]!='m' || s[n-1]!= 'w' ){
        cout<<"NO"<<endl;
    }
    else{
        int ans=0;
        for( int i=0 ; i<(s.length()-1) ; i++ ){
            if( s[i]==s[i+1] )
                continue;
            else if( s[i]=='m' && s[i+1]=='m' )
                continue;
            else if( s[i]=='m' && s[i+1]=='e' )
                continue;
            else if( s[i]=='e' && s[i+1]=='e' )
                continue;
            else if( s[i]=='e' && s[i+1]=='o' )
                continue;
            else if( s[i]=='o' && s[i+1]=='o' )
                continue;
            else if( s[i]=='o' && s[i+1]=='w' )
                continue;
            else if( s[i]=='w' && s[i+1]=='w' )
                continue;
            else{
                cout<<"NO"<<endl;
                ans=1;
                break;
            }
        }
        if( ans==0 )
            cout<<"YES"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while( t-- )
        solve();
    return 0;
}
