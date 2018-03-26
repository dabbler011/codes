#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		int i;
		cin>>s;
		int ans=0;
		for(i = 0;s[i] != '\0';i++) {
			if(s[i]=='c' || s[i]=='h' || s[i] == 'e' ||s[i]=='f') {
				int j = 0,sum=0;
				for (j=0;j<4;j++) {
					if(s[i+j] == '\0') {
						break;
					}
					if(s[i+j] == 'c') {
						sum+=1000;
					} else if(s[i+j] == 'h') {
						sum+=100;
					} else if(s[i+j] == 'e') {
						sum+=10;
					} else if(s[i+j] == 'f') {
						sum+=1;
					}
				}
				if(sum==1111) {
					ans++;
				}
			}
		}
		if(ans==0) {
			cout<<"normal\n";
		} else {
			cout<<"lovely "<<ans<<endl;
		}
	}
	return 0;
}