#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
		int n,d;
		cin>>n>>d;
		long int a[n],i;
		long long int sum = 0;
		for(i=0;i<n;i++){
			scanf("%ld",&a[i]);
			sum += a[i];
		}
		if(sum%n==0){
			sum = sum/n;
			long long count = 0;
			for (i=0;i<n-d;i++){
				if (a[i]!=sum){
					count+=(abs(a[i]-sum));
					a[i+d]+=a[i]-sum;
				}
			}
			while(i<n){
				if (a[i]!=sum){
					count=sum;
					break;
				}
			}
			cout<<count<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}