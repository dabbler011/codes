#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int i,j,n,k=0;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i==0 || i==n-1 )
			k+=((1<<(n-2))%1000000000*a[i])%1000000000;
			else
			k+=((1<<(n-3))%1000000000*a[i]%1000000000)%1000000000;
			//cout<<k<<endl;
		}
		k%=1000000000;
		for(i=1;i<n-2;i++){
                int x=n-4;
                int y=(a[i]*a[i+1]);
                k+=(y%1000000000*(1<<x)%1000000000)%1000000000;
                //cout<<k<<endl;
                for(j=i+2;j<n;j++){
                    y*=a[j]%1000000000;
                    k+=(y%1000000000*(1<<x)%1000000000)%1000000000;
                  //  cout<<k<<endl;
                    x--;
                }
		}
		k+=(a[n-2]*a[n-1])%1000000000;
		//cout<<k<<endl;
		int x=n-3;
		int y=a[0]*a[1];
		k+=(y%1000000000*(1<<x)%1000000000)%1000000000;
		//cout<<k<<endl;
		for(i=2;i<n;i++){
            y*=a[i];
            k+=(y%1000000000*(1<<x)%1000000000)%1000000000;
            x--;
   		}
		cout<<k%1000000000<<endl;
	}
	return 0;
}