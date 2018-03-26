#include <bits/stdc++.h>
using namespace std;

int counts[4]={0};

int main() {
	string s;
	cin>>s;
	int j,i,count=0;
	char ch[4];
	for(i=0;s[i]!='\0';i++) {
		if(count==0) {
			ch[0]=s[i];
			count++;
			counts[0]++;
		} else {
			int flag=0;
			for(j=0;j<count;j++) {
				if(s[i]==ch[j]) {
					flag=1;
					counts[j]++;
					break;
				}
			}
			if(flag==0) {
				count++;
				if(count==5) break;
				ch[count-1]=s[i];
				counts[count-1]++;
			}
		}
	}
	if(count==5 || count == 0 || count == 1) cout<<"No";
	else {
		if(count == 2) {
			if(counts[0] == 1 || counts[1] == 1) cout<<"No";
			else cout<<"Yes";
		} else if(count == 3) {
			if(s.length()==3) cout<<"No";
			else cout<<"Yes";
		} else if(count == 4) {
			cout<<"Yes";
		}
	}
	return 0;
}