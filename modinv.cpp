#include <bits/stdc++.h>
using namespace std;

long long int modularExponentiation(long long int x,long long int n,long long int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
long long int modInverse(long long int A,long long int M)
{
    return modularExponentiation(A,M-2,M);
}

int main () {
    int i,j;
    for (i=1;i<=1000;i++) {
        for (j=i+1;j<=1000;j++) {
            long long ans = (i * modInverse(j, 1000000007))%1000000007;
            if(ans == 187500002) {
                cout << i << "/" << j << "\n";
                break;
            }
        }
    }
    return 0;
}