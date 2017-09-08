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
		long long int a[n],max[n],m=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			max[i]=a[i];
			if(i-2>=0){
				max[i]+=max[m];
				if(a[m]<a[m+1]){
					m+=1;
				}
			}
		}
		cout<<"Case "<<te-t<<": ";
		if(n==0){
			cout<<"0";
		}
		else if(n==1){
			cout<<a[0];
		}
		else{
			cout<<max(a[m],a[n-1],a[n-2]);
		}
		cout<<endl;
	}
	return 0;
}