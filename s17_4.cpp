#include <bits/stdc++.h>
using namespace std;
#define l long long int 
#define k 1000000007

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		l a[n] = {0},b[m][5];
		int i;
		for(i=0;i<n;i++){
			a[i]=0;
		}
		for(i = 0;i < m;i++){
			cin>>b[i][0]>>b[i][1]>>b[i][2];
			b[i][1]--;
			b[i][2]--;
			b[i][3]=1;
			b[i][4]=0;
		}
		while(i--){
			if(i<m-1){
				b[i][4]+=(b[i+1][4]);
				b[i][4]%=k;
				if(b[i][4]<0){
					b[i][4]+=k;
				}
				b[i][3]+=b[i][4];
				b[i][3]%=k;
				if(b[i][3]<0){
					b[i][3]+=k;
				}
			}
			if(b[i][0] == 2){
				b[b[i][2]][4]+=b[i][3];
				b[b[i][2]][4]%=k;
				if(b[i][1]>0){
					b[b[i][1]-1][4]-=(b[i][3]);
					b[b[i][1]-1][4]%=k;
					if(b[b[i][1]-1][4]<0){
						b[b[i][1]-1][4]+=k;
					}
				}
			}
			else{
				a[b[i][1]]+=b[i][3];
				a[b[i][1]]%=k;
				if(b[i][2]<n-1){
					a[b[i][2]+1]-=b[i][3];
					a[b[i][2]+1]%=k;
					if(a[b[i][2]+1]<0){
						a[b[i][2]+1]+=k;
					}
				}
			}
		}
		cout<<a[0]<<" ";
		for(i=1;i<n;i++){
			a[i]+=a[i-1];
			a[i]%=k;
			if(a[i]<0){
				a[i]+=k;
			}
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}