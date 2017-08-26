#include <bits/stdc++.h>
using namespace std;

void chck(string temp,int i,int j){
	while(i>=0){
		if(temp[i]!=temp[j]){
			cout<<"NO\n";
			return;
		}
		i--;
		j++;
	}
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str,temp="";
		cin>>str;
		int i=0,j;
		temp+=str[0];
		for(i=1;i<str.length();i++){
			if(str[i]!=str[i-1]){
				temp+=str[i];
			}
		}
		j=temp.length()/2;
		if(temp.length()%2==0){
			i=j-1;
		}
		else{
			i=j-1;
			j++;
		}
		chck(temp,i,j);
	}
	return 0;
}