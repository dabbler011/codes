#include <bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define ll long long
#define s(x) scanf("%d", &x)
#define sd(x) scanf("%lf", &x)
#define sl(x) scanf("%lld", &x)
#define mod 1000000007
#define fi first
#define se second
#define p(x) printf("%d",x)
#define pl(x) printf("%lld", x)
#define pd(x) printf("%lf", x)
#define pn() printf("\n")
#define vi(v) vector<int>v
#define vl(v) vector<long long int>v
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define len(s) s.length()
void input(int n,int a[]){loop(n)cin>>a[i];}
ll bin_expo(ll A, ll B, ll M){ll res = 1LL;while (B > 0){if(B % 2 == 1){res = (res * A) % M;}A = (A * A) % M; B = B / 2;}return res;}

int main()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	int cnt=0;
	for(int i=0;i<n/2;i++)
	{
		set<char>c1;
		int freq[27];
		for(int j=0;j<27;j++)
			freq[j]=0;
		freq[s1[i]-'a']++;
		freq[s2[i]-'a']++;
		freq[s1[n-i-1]-'a']++;
		freq[s2[n-i-1]-'a']++;
		c1.insert(s1[i]);
		c1.insert(s2[i]);
		c1.insert(s1[n-i-1]);
		c1.insert(s2[n-i-1]);
		if(c1.size()==1)
			continue;
		if(c1.size()==2)
		{
			// cout<<freq[s1[i]-'a']<<endl;
			if(freq[s1[i]-'a']==1||freq[s1[i]-'a']==3)
			{
				cnt++;
			}
		}
		if(c1.size()==4)
		{
			cnt+=2;
		}
		if(c1.size()==3){
			// cout<<"here";
			if(s1[i]==s1[n-i-1])
			{
				// cout<<"here1";
				cnt+=2;
			}
			else
				cnt+=1;
		}
		// cout<<i<<" "<<c1.size()<<" "<<cnt<<endl;
	}
	if(n&1)
	{
		if(s1[n/2]!=s2[n/2])
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}