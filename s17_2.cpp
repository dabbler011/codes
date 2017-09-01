#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int d=0;
		if(n%2==0){
			d=2;
		}
		else{
			d=3;
		}
		for(i=1;i<=n-d;i+=2){
			cout<<i+1<<" "<<i<<" ";
		}
		if(d==2){
			cout<<i+1<<" "<<i<<" ";
		}
		else{
			cout<<i+1<<" "<<i+2<<" "<<i;
		}
	}
}