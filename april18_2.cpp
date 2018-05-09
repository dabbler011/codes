#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		long long int n,hash[2009];
		cin>>n;
		int i;
		set <long long int> st;
		set <long long int>:: iterator it1,it2;
		long long int ans=0;
		for (i=0;i<2009;i++) hash[i]=0;
		for (i=0;i<n;i++) {
			long long int a;
			cin>>a;
			hash[a+1000]++;
			st.insert(a);
		}
		for (i=0;i<2009;i++) ans+=(hash[i]*(hash[i]-1))/2;
		for (it1=st.begin();it1!=st.end();it1++) {
			it2=it1;
			for (it2++;it2!=st.end();it2++) {
				long long int mid=(*it1+*it2)/2;
				if (hash[mid+1000] > 0 && (*it1+*it2)%2==0) ans+=(hash[(*it1)+1000]*hash[(*it2)+1000]);
			}
		}
		cout<<ans<<endl;
	}
}