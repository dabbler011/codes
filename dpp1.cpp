#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,te;
	cin>>t;
	te=t;
	while(t--) {
		int n;
		cin>>n;
		int i;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i>=2){
				a[i]+=a[i-2];
			}
		}
		cout<<"Case "<<te-t<<": ";
		if(a[n-1]>a[n-2]){
			cout<<a[n-1]<<endl;
		}
		else{
			cout<<a[n-2]<<endl;
		}
	}
	return 0;
}