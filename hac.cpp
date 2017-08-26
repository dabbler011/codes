#include <bits/stdc++.h>
using namespace std;

int main () {
	int n,k,i;
	cin>>n>>k;
	int x,a[n+1],y,q;
	for (i = 1;i <= k;i++) {
		cin>>x;
		while (x--) {
			cin>>y;
			a[y]=i;
		}
	}
	cin>>q;
	while(q--) {
		cin>>x>>y;
		int ans = abs(a[x]-a[y]);
		ans = min (ans, k-ans);
		cout<<ans<<endl;
	}
	return 0;
}