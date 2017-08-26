#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s,t;
		cin>>s>>t;
		int len = s.length();
		int arr[26]={0};
		int i,j,conts=0,cntt=0,flag=1;;
		for(i=0;i<len;i++){
			flag=1;
			if(arr[s[i]-97]==1){
				flag=-1;
				break;
			}
			arr[s[i]-97]++;
			for (j=0;j<len;j++){
				
				if(s[i]==t[j]){
					flag=0;
					break;
				}
			}
			cnts+=flag;
		}
		if(flag==-1){
			cout<<"A\n";
			continue;
		}
		for(i=0;i<len;i++){
			flag=1;
			for (j=0;j<len;j++){
				if(s[j]==t[i]){
					flag=0;
					break;
				}
			}
			cntt+=flag;
		}
		if (cnts == 0){
			cout<<"A"<<endl;
		} 
		else if (cntt == 0){
			cout<<"A"<<endl;
		}
		else{
			cout<<"B\n";
		}
	}
	return 0;
}