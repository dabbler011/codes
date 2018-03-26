#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++) {
		cin>>a[i];
		int count=0;
		while(a[i]%2==0){
			count++;
			a[i]/=2;
		}
		a[i]=count;
		if(i>0){
			a[i]+=a[i-1];
		}
	}
	int q,l,r;
	cin>>q;
	while(q--) {
		cin>>l>>r;
		l--;
		r--;
		if(l>0){
			cout<<a[r]-a[l-1];
		}
		else{
			cout<<a[r];
		}
		cout<<endl;
	}
	return 0;
}