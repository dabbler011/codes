#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	long int j,gcd;
	for(i=0;i<n-1;i++){
		gcd = a[i+1];
		for(j=i+2;j<n;j++){
			gcd = __gcd(a[j],gcd);
		}
		a[i]=gcd;
	}
	int max=0;
	for(i=1;i<n-1;i++){
		if(a[max]<a[i]){
			max=i;
		}
	}
	cout<<max+1;
	return 0;
}