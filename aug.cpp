#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,i=0,j=0,chck=1,mul=1;
		int a[8]={0};
		//for(i=0;i<8;i++) cout<<a[i];
		cin>>n;
		int A[n];
		for(;i<n;i++){
			cin>>A[i];

			if(i==0){
				if(A[i]==1){
					a[A[i]]++;
					continue;
				}
				else{
					chck=0;
					continue;
				}
			}
			if(A[i-1]==7&&A[i]!=A[i-1]){
				mul=0;
			}
			if(A[i]>0&&A[i]<8){
				if(A[i]==A[i-1]){
					if(mul==1){
						a[A[i]]++;
						
					}
					else{
						a[A[i]]--;
						if(a[A[i]]==-1){
							chck=0;
						}
					}
				}
				else if(A[i]==A[i-1]+1){
					if(mul==1){
						a[A[i]]++;
						
					}
					else{
						
						chck=0;
					}
				}
				else if(A[i]==A[i-1]-1){
					if(mul==0){

						a[A[i]]--;
						if(a[A[i]]==-1){
							chck=0;
						}
					}
					else{
						
						chck=0;
					}
				}
				else{
					
					chck=0;
				}
			}
			else{
				
				chck =0;
			}
		}
		if(chck==0){
			cout<<"no\n";
		}
		else{
			cout<<"yes\n";
		}
	}
	return 0;
}