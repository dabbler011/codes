#include <bits/stdc++.h>
using namespace std;

int main () {
	long long int i,n,u;
	cin>>n>>u;
	double a[n],b[n-2];
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	for(i=0;i<n-2;i++) {
		b[i]=max((a[i+2]-a[i+1])/(a[i+2]-a[i]),(a[n-1]-a[i+1])/(a[n-1]-a[i]));
	}
	sort(b,b+n-2);
	cout<<b[n-3];
	return 0;
}