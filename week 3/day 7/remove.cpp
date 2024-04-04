
#include <bits/stdc++.h>
using namespace std;

int t,n,a;
int main() {
	cin >>t;
	while (t--) {
		cin >>n;
		for (int i=0;i<n;i++)
            a[i]=-1;
		int ans=0;
		for (int i =0;i<n;i++) {
			int x;
			cin >> x; x--;
			if (a[x] != -1) ans = max(ans,a[x]+1);
			a[x]=i;
		}
		cout<<ans<<endl;
	}
}
