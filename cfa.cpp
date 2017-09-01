#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int i;
	long long int a[1000];
	cin>>a[1]>>a[2]>>a[3];
	double m1 = a[2]-a[1],m2=a[3]-a[2],m3=(a[3]-a[1])/2;
	double int c1 = a[1]-m1,c2=a[2]-2*m2,c3=a[3]-3*m3,cx;
	int flag =0,cnt=0;
	if(m1==m2){
		flag=1;
		cnt=1;
	}
	if(n==3&&cnt==1){
		cout<<"No";
		return 0;
	}
	if(n==3&&cnt==0){
		cout<<"Yes";
		return 0;
	}
	cin>>a[4];
	if(a[4]==4*m1+c1){
		flag=1;
		cnt=1;
	}
	else if(a[4]==4*m2+c2){
		flag=2;
		cnt=1;
	}
	else if(a[4]==4*m3+c3){
		flag=3;
		cnt=1;
	}
	else{
		if((a[4]-a[3])==m1){
			flag=1;
			cnt=2;
			cx = a[4]-4*m1;
		}
		else if((a[4]-a[2])/2==m3){
			flag=3;
			cnt=2;
			cx = a[4]-4*m3;
		}
		else if((a[4]-a[1])/3==m2){
			flag=2;
			cnt=2;
			cx = a[4]-4*m2;
		}
	}
	if(flag==0){
		cout<<"No";
		return 0;
	}
	if(flag==2){
		m1=m2;
		c1=c2;
	}
	if(flag==3){
		m1=m3;
		c1=c3;
	}
	for(i=5;i<n;i++){
		cin>>a[i];

	}
	return 0;
}