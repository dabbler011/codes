#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,cg=0,cr=0,cb=0,count=0;
	cin>>n;
	string s;
	cin>>s;
	for (i=0;i<n;i++) {
		count++;
		if(s[i]=='R') cr++;
		else if (s[i]=='B') cb++;
		else if (s[i] == 'G') cg++;
	}
	if(count==1) cout<<s[0];
	else if (cou)
	return 0;
}