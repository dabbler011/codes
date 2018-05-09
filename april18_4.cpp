#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		long long int c[s.length()],n,i,ans=0;
		cin>>n;
		c[0]=0;
		if (s[0]=='a') c[0]++;
		else c[0]--;
		if (c[0]>0) ans++;
		for (i=1;s[i]!='\0';i++) {
			if (s[i]=='a') {
				c[i]=c[i-1]+1;
			} else {
				c[i]=c[i-1]-1;
			}
			if (c[i]>0) ans++;
		}
		//cout<<ans<<" ";
		for (i=0;s[i]!='\0';i++) {
			if (c[i]>0 &&c[s.length()-1]>=0) {
				ans+=n-1;
			} else if (c[i]<=0 && c[s.length()-1]<=0) {
				continue;
			} else if (c[i]>0) {
				if (c[i]/abs(c[s.length()-1]) < n) {
					ans+=(c[i]/abs(c[s.length()-1]));
					if (abs(c[i]%c[s.length()-1])==0) {
						ans--;
					}
				} else ans+=n-1;
			} else if (c[i]<=0) {
				if (n-1-abs(c[i])/c[s.length()-1] > 0) {
					ans+=(n-1-abs(c[i])/c[s.length()-1]);
					
				}
			}
			//cout<<ans<<" ";
		}
		cout<<ans<<endl;
	}
	return 0;
}