#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,i,t1;
		cin>>n>>q;
		long int a[n],b[n],c[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i==0){
				b[i]=1;
				t1=i;
				c[t1]=i;
			}
			else if(a[i]==a[i-1]){
				b[i]=b[i-1]+1;	
				c[t1]=i;			
			}
			else{
				b[i]=1;
				t1=i;
				c[t1]=i;
			}
			//cout<<b[i]<<" ";
		}
		
		int l,r,k;
		long long int ans=0;
		while(q--){
			ans=0;
			cin>>l>>r>>k;
			l--;
			r--;
			for(i=l;i<=r;){
				if(c[i-b[i]+1]<=r&&b[c[i-b[i]+1]]-b[i]+1>=k){
					ans++;
				}
				else if(c[i-b[i]+1]>r){
					if(b[r]-b[i]+1>=k)
						ans++;
				}
				i=c[i-b[i]+1]+1;
				//cout<<i<" ";
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}