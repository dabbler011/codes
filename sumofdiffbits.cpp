#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        long long int a[n],i,j=0,cnt=0,mod=1000000007,ans=0;
        for (i=0;i<n;i++) {
            cin>>a[i];
        }
        while (j<=31) {
            cnt=0;
            for (i=0;i<n;i++) {
                if ((a[i]>>j)&1==1) {
                    cnt++;
                }
            }
            ans+=(cnt*(n-cnt))%mod;
            ans%=mod;
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}