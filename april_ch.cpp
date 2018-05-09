#include <bits/stdc++.h>
using namespace std;

int main () {
	long long int n,m,k,i;
	cin>>n>>m>>k;
	long long int a[n],p[m],sum=0,in=m;
	for (i=0;i<n;i++) {
		cin>>a[i];
		sum+=a[i];
	}
	for (i=0;i<m;i++) {
		cin>>p[i];
	}
	for (i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}