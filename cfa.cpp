#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int i;
	long long int a[1000];
	cin>>a[1]>>a[2]>>a[];
	long long int m = a[2]-a[1];
	long long int c = a[1]-m,c1;
	int flag =1;
	for(i=3;i<n;i++){
		cin>>a[i];
		if(a[i]==m*i+c){
			continue;
		}
		else{
			if(flag==1){
				c1 = a[i]-m*i;
				flag++;
			}
			else if(flag==2){
				if(a[i]==m*i+c1){
					continue;
				}
				else{
					flag =0;
				}
			}
		}
	}
	if(flag!=2){
		m = a[3]-a[2];
		c=a[2]-m*2;
	}
	if(flag==0||flag==1){
		cout<<"No";
	}
	else{
		cout<<"Yes";
	}
	return 0;
}