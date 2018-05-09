#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		int a,b,count=0,ans=0;
		cin>>a>>b;
		string s1,s2;
		cin>>s1>>s2;
		if (a<b) {
			int c;
			string t;
			c=a;
			a=b;
			b=c;
			t=s1;
			s1=s2;
			s2=t;
		}
		int dp[a][3];
		memset(dp,0,sizeof(dp));
		for (int i=0;s1[i]!='\0';i++) {
			for (int j=0;j<3;j++) {
				if (j==0) {
					
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}