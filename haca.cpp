#include <bits/stdc++.h>
using namespace std;

int func(string str,int i,int ans){
	int len=str.length(),j,min=i;
	j=(len+i)/2;
	if((len+i)%2==0){
		i=j-1;
	}
	else{
		i=j-1;
		j++;
	}
	while(j<len){
		if(str[i]!=str[j]){
			min++;
		}
		if(min==ans){
			return ans;
		}
		j++;
		i--;
	}
	return min;
}

int main() {
	string str;
	cin>>str;
	int len = str.length();
	int ans=len/2,i=0;
	for(i=0;i<ans;i++){
		ans=func(str,i,ans);
	}
	cout<<ans;
	return 0;
}