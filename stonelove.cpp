#include<bits/stdc++.h>
using namespace std;

int bin_search(long long int a[],int begin,int end,long long int m) {
	int mid = (begin+end)/2;
	if (m <= a[mid] && m > a[mid-1])
		return mid;
	else if (m > a[mid])
		return bin_search(a,mid+1,end,m);
	else
		return bin_search(a,begin,mid-1,m);
}

int main() {
	int n,q,i;
	cin>>n>>q;
	long long int a[n],m;
	cin>>a[0];
	for (i = 1;i < n;i++) {
		cin>>a[i];
		a[i]+=a[i-1];
	}
	while(q--) {
		cin>>m;
		if (m <= a[mid]) cout<<"1"<<endl;
		else cout<<bin_search(a,0,n-1,m)+1<<endl;
	}
	return 0;
}