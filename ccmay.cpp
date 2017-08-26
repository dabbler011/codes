#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		long int l[n],k,i;
		for(i=0;i<n;i++){
			cin>>l[i];
		}
		while (q--){
			cin>>k;
			int count=0;
			multiset<long int> ms;
			for (i=0;i<n;i++){
				if(l[i]>=k){
					count++;
				}
			}
			if(n==count){
				cout<<count<<endl;
			}
			else{
				int a[n-count];
				int size=n-count,j=0;
				for(i=0;i<n;i++){
					if(l[i]<k){
						a[j]=l[i];
						j++;
					}
				}
				sort(a,a+j);
				i=0;
				while(j--){
					i+=k-a[j];
					if(i<j)
						count++;
					else
						break;
				}
				cout<<count<<endl;
			}
		}
	}
	return 0;
}