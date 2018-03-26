#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int cnt = 0,j;
	if(n==0){
		cout<<2;
		exit(0);	
	}
	else if(n==1){
		cout<<1;
		exit(0);
	}
	while (1){
		for(j=2;j*j<=n-cnt;j++) {
			if((n-cnt)%j==0){
				break;
			}
		}
		if(j*j>n-cnt){
			cout<<cnt;
			break;
		}
		for(j=2;j*j<=n+cnt;j++) {
			if((n+cnt)%j==0){
				break;
			}
		}
		if(j*j>n+cnt){
			cout<<cnt;
			break;
		}
		cnt++;
	}
	return 0;
}