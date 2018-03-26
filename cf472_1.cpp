#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i,flag=1,f2=0,count=0;
	for (i = 1;i < n-1;i++) {
		if(s[i]=='?') {
			count++;
			if(s[i-1]!='?' && s[i+1]!='?') {
				if (s[i-1]==s[i+1]) {
					f2=1;
				}
			} else {
				f2=1;
			}
		}
		if(s[i]!='?') {
			if (s[i] == s[i-1] || s[i] == s[i+1]) {
				flag=0;
				break;
			}
		}
	}
	if (flag == 1) {
		if(count>0){
			if(f2==1) {
				cout<<"Yes";
			}
			else {
				cout<<"No";
			}
		} else {
			cout<<"Yes";
		}
	} else {
		cout<<"No";
	}
	return 0;
}