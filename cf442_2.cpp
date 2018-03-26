#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n,ans,i;
	cin>>n;
	if(n==2) {
		ans = 3;
	} else {
		ans = 2 * (n-1);
	}
	cout<<ans<<endl;
	for (i = 2;i<=n;i++) {
		cout<<i<<" ";
	}
	for (i = 1;i<n;i++) {
		cout<<i<<" ";
	}
	if(n==2){
		cout<<"2 ";
	}
	return 0;
}