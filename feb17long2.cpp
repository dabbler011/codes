#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		long int n,m,x,k,i,en=0,on=0;
		cin>>n>>m>>x>>k;
		string s;
		cin>>s;
		for(i=0;s[i]!='\0';i++) {
			if(s[i]=='E') en++;
			else on++;
		}
		en=min(en,x*(m/2));
		on=min(on,x*(m/2+(m%2)));
		long int ans = en+on;
		if (n>ans) {
			cout<<"no"<<endl;
		} else {
			cout<<"yes"<<endl;
		}
	}
	return 0;
}