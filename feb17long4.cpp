#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int i;
		cin>>s;
		int ans[s.length()],b[s.length()],count[26],indeces[26];
		for(i=0;i<26;i++) {
			count[i]=0;
			indeces[i]=-1;
		}
		for (i=0;s[i] != '\0';i++) {
			count[s[i]-'a']++;
		}
		int k=0;
		for(i=0;i<26;i++) {
			if(count[i]%2==1) {
				k++;
			}
		}
		if(k>1){
			cout<<"-1\n";
			continue;
		}
		k=0;
		for (i=0;s[i] != '\0';i++) {
			if(count[s[i]-'a']%2==1) {
				ans[i] = s.length()/2;
				count[s[i]-'a']--;
				continue;
			}
			if(indeces[s[i]-'a']==-1) {
				ans[i]=k;
				k++;
				indeces[s[i]-'a']=s.length()-k;
			} else {
				ans[i]=indeces[s[i]-'a'];
				indeces[s[i]-'a']=-1;
			}
		}
		for (i=0;s[i] != '\0';i++) {
			b[ans[i]]=i;
		}
		for (i=0;s[i] != '\0';i++) {
			cout<<b[i]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}