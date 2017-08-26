#include <bits/stdc++.h>
using namespace std;

long long int sum(long long int n){
	if(n==1)
		return 1;
	if(n==2)
		return 10;
	return ((4*n*n-6*(n-1))%1000000009+sum(n-2))%1000000009;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		cout<<sum(n)<<endl;
	}
	return 0;
}