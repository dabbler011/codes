#include <bits/stdc++.h>
using namespace std;
int a[2000][2000];

int main(){
	int i,j;
	for(i=0;i<2000;i++){
		for(j=0;j<2000;j++){
			if(i==0&&j==0)
				continue;
			else if(i==0||j==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=(a[i-1][j]+a[i][j-1])%1000000007;
			}
			/*if(i<6&&j<6)
			cout<<a[i][j]<<" ";*/
		}
		/*if(i<6)
		cout<<endl;*/
	}
	int t,k;
	cin>>t;
	while(t--){
		cin>>i>>j>>k;
		i--;j--;
		int ans=a[i][j];
		int m,n;
		while(k--){
			cin>>m>>n;
			m--;n--;
			if(i-m>=0&&j-n>=0){
				//cout<<"here";
				ans-=((i-m)*a[m][n]+(j-n)*a[m][n]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}