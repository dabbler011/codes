#include <bits/stdc++.h>
using namespace std;

long long int max_sum(int a[],int n){
	int i,j;
	long long long int max = 0,sum=0,mul=1;
	for(i=0;i<n;i+=2){
		sum=0;
		mul=1;
		for(j=0;j<n;j++){
			if(j==i){
				ans+=a[i];
			}
			else{
				if(mul==1){
					mul=a[j];
				}
				else{
					mul*=a[j];
					sum+=mul;
					mul=1;
				}
			}
		}
		if(max<sum){
			max=sum;
		}
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	long long int a[n],ans=0;
	int i,last=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==1){
			sum++;
			sum+=max_sum(&a[last],i-last);
			last=i;
		}
	}
	sum+=max_sum(&a[last],n-last);
	cout<<sum;
	return 0;
}