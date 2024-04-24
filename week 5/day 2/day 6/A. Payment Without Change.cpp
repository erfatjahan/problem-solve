#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int abc = min(a,d/c);
		d-= abc * c;
		if(d<= b)
            cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}

}
