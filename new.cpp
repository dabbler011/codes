#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int cnt=0,conse=0;
	string s;
	cin>>s;
	long long int dp[s.length()]={0};
	for(long long int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			conse++;
		}
		else
		{
			if(dp[conse]!=1)
			cnt = cnt + 2*(conse);
			else
				cnt+=conse;
			dp[conse]=1;
		}
	}
	cout<<cnt<<endl;
}
return 0;
}