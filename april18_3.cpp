#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int modularExponentiation(long long int x,long long int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%mod,n/2)%mod;
    else                             //n is odd
        return (x*modularExponentiation((x*x)%mod,(n-1)/2))%mod;

}

int main () {
	int t;
	cin>>t;
	while (t--) {
		long long int n,w;
		cin>>n>>w;
		if (w>=9 || w<-9) {
			cout<<0;
		} else if (w>=0) {
			cout<<((9-w)*modularExponentiation(10,n-2))%mod;
		} else {
			cout<<((10+w)*modularExponentiation(10,n-2))%mod;
		}
		cout<<endl;
	}
	return 0;
}