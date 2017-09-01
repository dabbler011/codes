#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length();
	int arr[len+1]={0};
	for (i = 0;i < len;i++){
		if((s[i]-'0')%2==0){
			arr[len+1]=arr[len]+1;
		}
	}
	for(i=1;i<=len;i++){
		cout<<arr[len]-arr[i-1]<<" ";
	}
	return 0;
}