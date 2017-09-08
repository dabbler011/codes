#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	whiel(t--) {
		string s;
		cin>>s;
		int i,a[10]={0};
		for(i=0;s[i]!='\0';i++){
			if(a[s[i]-65]<2){
				a[s[i]-65]++;
			}
		}
		int j;
		for(j=65;j<=90;j++){
			i=j%10;
			if(a[i]!=0&&j/10!=0){
				if(i==j/10){
					if(a[i]==2){
						cout<<(char)j;
					}
				}
				else{
					cout<<(char)j;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}