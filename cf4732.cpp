#include <bits/stdc++.h>
using namespace std;

int main () {
	long long int n,k,m,i,j,temp;
	cin>>n>>k>>m;
	string str[n];
	long long int a[n],b[n];
	for (i=0;i<n;i++) {
		cin>>str[i];
	}
	map <string,long long int> maping;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	for (i=0;i<k;i++) {
		cin>>temp;
		long long int min = 10000000000;
		for (j=0;j<temp;j++) {
			cin>>b[j];
			if (a[b[j]-1]<min) min=a[b[j]-1];
		}
		for (j=0;j<temp;j++) {
			a[b[j]-1]=min;
		}
	}
	for (i=0;i<n;i++) {
		maping[str[i]]=a[i];
	}
	long long int ans=0;
	for (i=0;i<m;i++) {
		cin>>str[i];
		ans+=maping[str[i]];
	}
	cout<<ans;
	return 0;
}