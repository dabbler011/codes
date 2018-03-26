#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,i;
		cin>>n;
		long int a[n],c,d,s;
		long long int sum = 0;
		for (i = 0;i < n;i++) {
			cin>>a[i];
		}
		cin>>c>>d>>s;
		sum = a[0];
		for (i = 1;i < n;i++) {
			if(a[i]-a[i-1]>0) {
				sum+=(a[i]-a[i-1]);
			}
			else {
				a[i]+=(a[i-1]-a[i]);
			}
		}
		cout<<sum*(c-1)<<".000000000"<<endl;
	}
	return 0;
}