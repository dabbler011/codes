#include<bits/stdc++.h>
using namespace std;

int check(long long int a[],int n,int c,long long int distance) {
	long long int prev = a[0];
	c--;
	int i;
	//cout<<"aaya"<<distance<<" "<<c<<endl;
	for (i = 1;i < n;i++) {
		if (a[i] - prev < distance) continue;
		prev = a[i];
		c--;
		if (c == 0) {
			return 1;
		}
	}
	return 0;
}

long long int bin_search (long long int a[],int n,int c,long long int begin,long long int end) {
	long long int mid = (begin+end)/2;
	int bool_mid = check(a,n,c,mid);
	if (bool_mid == 1 && mid == a[n-1] - a[0]) return a[n-1] - 1;
	if (bool_mid == 0) return bin_search(a,n,c,begin,mid-1);
	int bool_next = check(a,n,c,mid+1);
	if(bool_next == 0) return mid;
	return bin_search(a,n,c,mid+1,end);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,c,i;
		cin>>n>>c;
		long long int a[n];
		for (i = 0;i < n;i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<bin_search(a,n,c,1,a[n-1]-a[0])<<endl;
	}
	return 0;
}